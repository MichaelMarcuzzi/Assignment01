/*  Assignment01  */

#ifndef CLI_H
#define CLI_H

#include <string>
#include <iostream>
using namespace std;

class CLI
{
    public:
        CLI();
        CLI(string);
        void repl();
    private:
        string parseCMD(string);
        string file;
};







#endif
