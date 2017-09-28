/*  Assignment01  */

#include "Control.h"
#include "CLI.h"

Control::Control(){
    

}

void Control::launch(int argc, char* argv[]){
    
    string errorMsg = "\nType Option:\n-c CommandLine Interface\n-u User Interface\n[-Option] + filename Preload Scripts\n\n";

    if (argc < 2 || argc > 3){
        cout << errorMsg;
        return;
    }else if(argc == 2){
        string option(argv[1]);

        if(option == "-c"){
           processCLI(); 
        }else if(option == "-u"){
           processUI(); 
        }else{
           cout << errorMsg;
           return;
        }
    }else if(argc == 3){
        string option(argv[1]);
        string file(argv[2]);
            
        if(option == "-c"){
           processCLI(file); 
        }else if(option == "-u"){
           processUI(file); 
        }else{
           cout << errorMsg;
           return;
        }

    }
    
}

void Control::processCLI(string file){
    cout << "CLI: " << file << endl; 
    CLI menu;
    menu.repl();
}

void Control::processUI(string file){
    cout << "UI: " << file << endl; 

}
