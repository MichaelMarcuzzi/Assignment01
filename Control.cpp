/*  Assignment01  */

#include "Control.h"
#include "CLI.h"

Control::Control(){
    

}

void Control::launch(int argc, char* argv[]){

    if (argc < 2){
        cout << endl << "Type Option:" << endl;
        cout << "-c Command Line Interface" << endl;
        cout << "-u User Interface" << endl;
        cout << "[Option] + filename Preload scripts" << endl;
        cout << endl;
        return;
    }else if(argc == 2){
        string option(argv[1]);

        if(option == "-c"){
           processCLI(); 
        }else if(option == "-u"){
           processUI(); 
        }else{
            cout << endl << "Type Option:" << endl;
            cout << "-c Command Line Interface" << endl;
            cout << "-u User Interface" << endl;
            cout << "[Option] + filename Preload scripts" << endl;
            cout << endl;
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
            cout << endl << "Type Option:" << endl;
            cout << "-c Command Line Interface" << endl;
            cout << "-u User Interface" << endl;
            cout << "[Option] + filename Preload scripts" << endl;
            cout << endl;
            return;
        }

    }
    
    
}

void Control::processCLI(string file){
    cout << "CLI: " << file << endl; 
}

void Control::processUI(string file){
    cout << "UI: " << file << endl; 

}
