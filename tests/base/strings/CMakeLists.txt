#
# Copyright 2019 Guolian Zhang.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

add_executable(string_printf_test "string_printf_test.cc")
target_link_libraries(string_printf_test strings)

add_executable(num_string_conversions_test "num_string_conversions_test.cc")
target_link_libraries(num_string_conversions_test strings)