/* Assignment01  */

#ifndef CONTROL_H
#define CONTROL_H

/* includes  */
#include <string>
using namespace std;

class Control{

    public:
        Control();
        void launch(int, char*[]); 

    private:
        void processCli();
        void processUi();

};

#endif
