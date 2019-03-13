#include "base/strings/num_string_conversions.h"

#ifdef WIN32
#include <corecrt_wstdio.h>
#endif

namespace base {

int8_t StringToInt8(const std::string& data) {
    int8_t result = 0;
    sscanf(data.c_str(), "%c", &result);
    return result;
}

int8_t StringToInt8(const std::wstring& data) {
    int8_t result = 0;
    swscanf(data.c_str(), L"%c", &result);
    return result;
}

int StringToInt(const std::string& data) {
    int result = 0;
    sscanf(data.c_str(), "%d", &result);
    return result;
}

int StringToInt(const std::wstring& data) {
    int result = 0;
    swscanf(data.c_str(), L"%d", &result);
    return result;
}

int64_t StringToInt64(const std::string& data) {
    int64_t result = 0;
#ifdef WIN32
    sscanf(data.c_str(), "%lld", &result);
#else
    sscanf(data.c_str(), "%ld", &result);
#endif
    return result;
}

int64_t StringToInt64(const std::wstring& data) {
    int64_t result = 0;
#ifdef WIN32
    swscanf(data.c_str(), L"%lld", &result);
#else
    swscanf(data.c_str(), L"%ld", &result);
#endif
    return result;
}

uint8_t StringToUInt8(const std::string& data) {
    uint8_t result = 0;
    sscanf(data.c_str(), "%c", &result);
    return result;
}

uint8_t StringToUInt8(const std::wstring& data) {
    uint8_t result = 0;
    swscanf(data.c_str(), L"%c", &result);
    return result;
}

uint32_t StringToUInt(const std::string& data) {
    uint32_t result = 0;
    sscanf(data.c_str(), "%u", &result);
    return result;
}

uint32_t StringToUInt(const std::wstring& data) {
    uint32_t result = 0;
    swscanf(data.c_str(), L"%u", &result);
    return result;
}

uint64_t StringToUInt64(const std::string& data) {
    uint64_t result = 0;
#ifdef WIN32
    sscanf(data.c_str(), "%llu", &result);
#else 
    sscanf(data.c_str(), "%lu", &result);
#endif
    return result;
}

uint64_t StringToUInt64(const std::wstring& data) {
    uint64_t result = 0;
#ifdef WIN32
    swscanf(data.c_str(), L"%llu", &result);
#else
    swscanf(data.c_str(), L"%lu", &result);
#endif
    return result;
}

float StringToFloat(const std::string& data) {
    float result = 0.0;
    sscanf(data.c_str(), "%f", &result);
    return result;
}

float StringToFloat(const std::wstring& data) {
    float result = 0.0;
    swscanf(data.c_str(), L"%f", &result);
    return result;
}

double StringToDouble(const std::string& data) {
    double result = 0.0;
#ifdef WIN32
    sscanf(data.c_str(), "%llf", &result);
#else
    sscanf(data.c_str(), "%lf", &result);
#endif
    return result;
}

double StringToDouble(const std::wstring& data) {
    double result = 0.0;
#ifdef WIN32
    swscanf(data.c_str(), L"%llf", &result);
#else
    swscanf(data.c_str(), L"%lf", &result);
#endif
    return result;
}

} // namespace base