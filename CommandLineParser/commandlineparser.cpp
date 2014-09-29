#include "commandlineparser.h"
#include "commandfactory.h"
#include <sstream>
#include <iostream>

/**
 * @brief CommandLineParser::parseCommand
 * @param inputBuffer
 * @param delimiter
 * @return
 */
Command CommandLineParser::parseCommand(std::string input, char delimiter)
{
    //Split char into elements
    std::vector<std::string> inputElements;
    inputElements = splitInputByDelimiter(input, delimiter);

    //For each commandElement construct a command
    std::vector<Command> subCommands;
    for (unsigned i = 0; i < inputElements.size() ;i++)
    {
        Command subCommand = CommandFactory::constructCommand(inputElements.at(i));
        subCommands.push_back(subCommand);
    }
    return CommandFactory::constructCommand(subCommands);
}

std::vector<std::string> CommandLineParser::splitInputByDelimiter(std::string input, char delimiter)
{
    std::vector<std::string> strings;
    std::istringstream f(input);
    std::string s;
    while (getline(f, s, delimiter))
    {
        std::cout << s << std::endl;
        strings.push_back(s);
    }
    return strings;
}
