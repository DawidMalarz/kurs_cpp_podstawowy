#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int result = 0;
    if(command == "add") {
        result =  first + second;
    }
    return std::to_string(result);
}