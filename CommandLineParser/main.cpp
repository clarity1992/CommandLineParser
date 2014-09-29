#include <iostream>

#include "commandlineparser.h"
using namespace std;

int main()
{
    CommandLineParser::parseCommand("test",',');

    CommandLineParser::parseCommand("test,,a,test,test",',');

    return 0;
}

