/*
 *
 * Copyright 2018 Guolian Zhang.
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
std::wstring StringPrintf(const wchar_t* format, ...);

// Store result into a supplied string.
void SStringPrintf(std::string& output, const char* format, ...);
void SStringPrintf(std::wstring& output, const wchar_t* format, ...);

// Append result to a supplied string.
void StringAppendPrintf(std::string& output, const char* format, ...);
void StringAppendPrintf(std::wstring& output, const wchar_t* format, ...);

} // namespace base

#endif // BASE_STRING_PRINTF_H_