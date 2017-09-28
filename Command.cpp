/*  Assignment01  */

#include "Command.h"


Command::Command(string cmd){
    this->cmd = cmd;    
}

Command::Command(string cmd, string options[MAX_ARR]){
    this->cmd = cmd;
    for(int i=0; i<MAX_ARR; i++){
        this->options[i] = options[i];
    }
}

string Command::cmdType(){
    return cmd;

}
string Command::optionAt(int pos){
    return options[pos];

}
