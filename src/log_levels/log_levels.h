#ifndef LOG_LEVELS_H
#define LOG_LEVELS_H

#include <string>

namespace log_line {
    std::string message(std::string line);
    std::string log_level(std::string line);
    std::string reformat(std::string line);
}

#endif