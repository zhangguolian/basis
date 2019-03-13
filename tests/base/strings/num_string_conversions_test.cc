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

#include <iostream>

#include "base/strings/num_string_conversions.h"

int main() {
    std::string data = "100";
    std::wstring data1 = L"100";
    std::cout << base::StringToInt64(data) << std::endl;
    std::cout << base::StringToInt64(data1) << std::endl;
    
    return 0;
}