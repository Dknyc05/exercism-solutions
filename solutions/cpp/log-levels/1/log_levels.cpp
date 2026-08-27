#include <string>
#include <cmath>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int pos = line.find(":");
    
    std::string log{line.substr(pos + 2)};
    return log;
}

std::string log_level(std::string line) {
    // return the log level
    int start = line.find("[");
    int end = line.find("]");

    std::string log{line.substr(start + 1,end - 1)};
    return log;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string reform{message(line) + " (" + log_level(line) + ")"};
    return reform;
}
}  // namespace log_line
