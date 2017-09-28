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
        Command();
        Command(string);
        Command(string, string[MAX_ARR]);
        string cmdType();
        void cmdType(string);
        string optionAt(int);
        void optionAt(int,string);
    private:
        string cmd;
        string options[MAX_ARR];
};







#endif
