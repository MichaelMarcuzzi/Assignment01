/*  Assignment01  */

#ifndef COMMAND_H
#define COMMAND_H
#define MAX_ARR 10

#include <string>
#include <iostream>
using namespace std;

class Command
{
    public:
        Command(string);
        Command(string, string[MAX_ARR]);
        string cmdType();
        string optionAt(int);
    private:
        string cmd;
        string options[MAX_ARR];
};







#endif
