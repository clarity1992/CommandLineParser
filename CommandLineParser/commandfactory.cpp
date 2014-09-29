#include "commandfactory.h"

Command CommandFactory::constructCommand(std::string)
{
    return Command();
}

Command CommandFactory::constructCommand(std::vector<Command> commands)
{
    return Command();
}


