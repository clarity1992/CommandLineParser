#ifndef COMMANDLINEPARSER_H
#define COMMANDLINEPARSER_H

#include "command.h"

class CommandLineParser
{
public:
    static Command parseCommand(char* inputBuffer, char delimiter);

private:
    static char* splitInputByDelimiter(char* input, char delimiter);
};

#endif // COMMANDLINEPARSER_H
