/*  Assignment01  */

#ifndef CLI_H
#define CLI_H

#include <string>
#include <iostream>
#include "Command.h"
using namespace std;

class CLI
{
    public:
        CLI();
        CLI(string);
        void repl();
    private:
        Command parseCMD(string);
        string file;
};







#endif
