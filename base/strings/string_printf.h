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

#ifndef BASE_STRING_PRINTF_H_
#define BASE_STRING_PRINTF_H_

#include <string>

namespace base {

// Return a C++ string given printf-like input.
std::string StringPrintf(const char* format, ...);
#ifdef WIN32
std::wstring StringPrintf(const wchar_t* format, ...);
#endif

// Store result into a supplied string.
const std::string& SStringPrintf(std::string& result, const char* format, ...);
#ifdef WIN32
const std::wstring& SStringPrintf(std::wstring& result, const wchar_t* format, ...);
#endif

// Append result to a supplied string.
const std::string& StringAppendPrintf(std::string& result, const char* format, ...);
#ifdef WIN32
const std::wstring& StringAppendPrintf(std::wstring& result, const wchar_t* format, ...);
#endif

} // namespace base

#endif // BASE_STRING_PRINTF_H_