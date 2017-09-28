/*  Assignment01  */

#include "CLI.h"
#include "Command.h"

CLI::CLI(){
    
}

CLI::CLI(string file){
    this->file = file;
}

void CLI::repl(){
    string cmd;
    
    if(file != ""){



    }

    while(1){
        cout << ">> ";
        getline(cin,cmd); 
        if(cmd == "quit"){
            break;
        }
        cout << parseCMD(cmd) << endl;
        
    }


}

string CLI::parseCMD(string cmd){
    string cmdType;
    string options[MAX_ARR];
    
    if(cmd.find(".") != 0){
        return "";
    }


    return "pull";
}
