#ifndef COMMANDLINEPARSER_H
#define COMMANDLINEPARSER_H

#include "command.h"
#include <vector>
#include <string>

class CommandLineParser
{
public:
    static Command parseCommand(std::string input, char delimiter);

private:
    static std::vector<std::string> splitInputByDelimiter(std::string input, char delimiter);
};

#endif // COMMANDLINEPARSER_H
