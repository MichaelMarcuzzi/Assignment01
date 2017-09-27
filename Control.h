/*  Assignment01  */

#ifndef CONTROL_H
#define CONTROL_H

/* includes  */
#include <string>
#include <iostream>
using namespace std;

class Control{

    public:
        Control();
        void launch(int, char*[]); 

    private:
        void processCLI(string f= "");
        void processUI(string f = "");
};

#endif
