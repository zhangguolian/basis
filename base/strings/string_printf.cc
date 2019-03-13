/*
 *
 * Copyright 2019 Guolian Zhang.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "base/strings/string_printf.h"

#include <stdarg.h>
#ifdef WIN32
#include <corecrt_wstdio.h>
#endif

#include <vector>

namespace base {

#ifdef WIN32
static int vsnprintf(wchar_t* buffer,
                     size_t buf_size,
                     const wchar_t* format,
                     va_list args) {
    return _vsnwprintf(buffer, buf_size, format, args);
}
#endif 

template<class StringType>
static void VSNPrintf(StringType& result, 
                      const typename StringType::value_type* format,
                      va_list args) {
    // Start using the default length to try.
    typename StringType::value_type buf[1024];

    va_list args_copy;
    va_copy(args_copy, args);
    int size = vsnprintf(buf, 1024, format, args_copy);
    va_end(args_copy);
    if (size > 0 && size < 1024) {
        result.append(&buf[0], size);
        return;
    }

    // Call failed, unknown error
    if (size < 0) {
        // test, need to add log
        return;
    }

    int buf_size = size + 1;
    std::vector<typename StringType::value_type> new_buf(buf_size);
    va_copy(args_copy, args);
    size = vsnprintf(&new_buf[0], buf_size, format, args_copy);
    va_end(args_copy);
    // Call failed, unknown error
    if (size < 0 || size >= buf_size) {
        // test, need to add log
        return;
    }

    result.append(&new_buf[0], size);
    return;
}

std::string StringPrintf(const char* format, ...) {
    va_list args;
    va_start(args, format);
    std::string result;
    VSNPrintf(result, format, args);
    va_end(args);
    return result;
}

#ifdef WIN32
std::wstring StringPrintf(const wchar_t* format, ...) {
    va_list args;
    va_start(args, format);
    std::wstring result;
    VSNPrintf(result, format, args);
    va_end(args);
    return result;
}
#endif

const std::string& SStringPrintf(std::string& result, const char* format, ...) {
    va_list args;
    va_start(args, format);
    result.clear();
    VSNPrintf(result, format, args);
    va_end(args);
    return result;
}

#ifdef WIN32
const std::wstring& SStringPrintf(std::wstring& result, const wchar_t* format, ...) {
    va_list args;
    va_start(args, format);
    result.clear();
    VSNPrintf(result, format, args);
    va_end(args);
    return result;
}
#endif

const std::string& StringAppendPrintf(std::string& result, const char* format, ...) {
    va_list args;
    va_start(args, format);
    VSNPrintf(result, format, args);
    va_end(args);
    return result;
}

#ifdef WIN32
const std::wstring& StringAppendPrintf(std::wstring& result, const wchar_t* format, ...) {
    va_list args;
    va_start(args, format);
    VSNPrintf(result, format, args);
    va_end(args);
    return result;
}
#endif

} // namespace base

