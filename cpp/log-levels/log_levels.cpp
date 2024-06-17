#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        return std::string {line.substr(line.find(" ")+1)}; 
    }

    std::string log_level(std::string line) {
        // return the log level
        return std::string {line.substr(line.find("[")+1, line.find("]")-1)}; 
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        std::string logLevel = std::string {line.substr(line.find("[")+1, line.find("]")-1)};
        return message(line + " ("+logLevel+")");
        
    }
}
