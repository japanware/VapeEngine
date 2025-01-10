//
// Created by japanware on 1/10/2025.
//

#ifndef UTILS_H
#define UTILS_H

#include <string>

enum printFlag {
    NONE = 0,
    ERROR,
    SUCCESS,
};

class Utils {
    public:
    [[maybe_unused]] static std::string to_lower(std::string str);
    [[maybe_unused]] static std::string to_upper(std::string str);

    static void print(const std::string& text,);

};



#endif //UTILS_H
