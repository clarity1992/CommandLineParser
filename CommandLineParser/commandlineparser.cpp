#include "commandlineparser.h"

#include <vector>

Command CommandLineParser::parseCommand(char *inputBuffer, char delimiter)
{
    //Split char into elements
    std::vector<char*> inputElements;
    inputElements = splitInputByDelimiter(inputBuffer, delimiter);

    //For each commandElement construct a command
    std::vector<Command> subCommands;
    for (unsigned i = 0; i < inputElements.size() ;i++)
    {
        Command subCommand = CommandFactory::constructCommand(inputElements.at(i));
        subCommands.push_back(subCommand);
    }
    return Command(subCommands);
}
