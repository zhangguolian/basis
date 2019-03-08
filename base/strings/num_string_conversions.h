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

#ifndef BASE_NUM_STRING_CONVERSIONS_H_
#define BASE_NUM_STRING_CONVERSIONS_H_

#include <string>

namespace base {

// Number -> string conversions
std::string NumberToString(int value);
std::wstring NumberToWString(int value);

std::string NumberToString(unsigned int value);
std::wstring NumberToWString(unsigned int value);

std::string NumberToString(long value);
std::wstring NumberToWString(long value);

std::string NumberToString(unsigned long value);
std::wstring NumberToWString(unsigned long value);

std::string NumberToString(long long value);
std::wstring NumberToWString(long long value);

std::string NumberToString(unsigned long long value);
std::wstring NumberToWString(unsigned long long value);

std::string NumberToString(double value);
std::wstring NumberToWString(double value);

// String -> number conversions.
int8_t StringToInt8(const std::string& data);
int8_t StringToInt8(const std::wstring& data);

int StringToInt(const std::string& data);
int StringToInt(const std::wstring& data);

int64_t StringToInt64(const std::string& data);
int64_t StringToInt64(const std::wstring& data);

uint8_t StringToUInt8(const std::string& data);
uint8_t StringToUInt8(const std::wstring& data);

uint32_t StringToUInt(const std::string& data);
uint32_t StringToUInt(const std::wstring& data);

uint64_t StringToUInt64(const std::string& data);
uint64_t StringToUInt64(const std::wstring& data);

float StringToFloat(const std::string& data);
float StringToFloat(const std::wstring& data);

double StringToDouble(const std::string& data);
double StringToDouble(const std::wstring& data);

bool StringToBool(const std::string& data);
bool StringToBool(const std::wstring& data);

// Hex encoding
// ......

}

#endif // BASE_NUM_STRING_CONVERSIONS_H_
