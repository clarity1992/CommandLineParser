#ifndef COMMANDFACTORY_H
#define COMMANDFACTORY_H
#include "command.h"

#include <vector>
#include <string>

class CommandFactory
{
public:
    static Command constructCommand(std::vector<Command> commands);
    static Command constructCommand(std::string);
};

#endif // COMMANDFACTORY_H
