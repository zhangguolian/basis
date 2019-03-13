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

#include "base/strings/string_printf.h"

int main() {
    std::string result = base::StringPrintf("Hello %s", "World"); 
    std::cout << result << std::endl;
    std::cout << base::SStringPrintf(result, "Hello %s", "World") << std::endl;
    std::cout << base::StringAppendPrintf(result, "Hello %s", "World") << std::endl;
    return 0;
}