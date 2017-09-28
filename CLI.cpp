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
    Command pCmd;
    if(file != ""){



    }

    while(1){
        cout << ">> ";
        getline(cin,cmd); 
        if(cmd == "quit"){
            break;
        }
        pCmd = parseCMD(cmd);
        //cout << parseCMD(cmd) << endl;
        
    }


}

Command CLI::parseCMD(string cmd){
    string cmdType = cmd;
    Command line;
    int opPos = 0;
    size_t strPos = 0;

    if(cmdType.find(".") == 0){
        cmdType.erase(0,1);
        if(cmdType.find(" ") != string::npos){
            strPos = cmdType.find(" ");
            
            line.cmdType(cmdType.substr(0,strPos));
            cmdType.erase(0,strPos+1);
            
            if(cmdType.find("-") != string::npos){
                for(opPos = opPos; opPos<(10-opPos); opPos++){
                    strPos = cmdType.find("-", 0);
                    if(strPos == string::npos){
                        break;
                    }
                    //options can only be one letter
                    line.optionAt( opPos, string(1,cmdType[strPos + 1])); 
                    
                    cmdType.erase(strPos, 3);
                }
            }   

            for(opPos = opPos; opPos<(10-opPos); opPos++){
                
                strPos = cmdType.find(" ", 0);
                
                if(cmdType.empty()){
                    break;
                }
                
                
                if(cmdType.find(" ", 1) != string::npos){
                    line.optionAt( opPos, cmdType.substr(0,strPos)); 
                    cmdType.erase(0, cmdType.find(" ", 1 )+1);
                }else{
                    line.optionAt(opPos, cmdType.substr(0,cmdType.size())); 
                    cmdType.clear();
                }
            }

        }else{
            line.cmdType(cmdType);
        }
    }

    return line;
}
