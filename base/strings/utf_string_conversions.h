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

#ifndef BASE_UTF_STRING_CONVERSIONS_H_
#define BASE_UTF_STRING_CONVERSIONS_H_

#include <string>

namespace base {

// These convert between UTF-8, -16, and -32 strings. 
// They are potentially slow, so avoid unnecessary conversions.
std::string WideToUTF8 (const std::wstring& data);
std::wstring UTF8ToWide(const std::string& data);

// ......

}

#endif // BASE_UTF_STRING_CONVERSIONS_H_