/*  Assigment01  */

#include "Control.h"

Control::Control(){
    

}

void Control::launch(int argc, char* argv[]){

    if (argc != 2){
        //call error when text implemented
        return;
    }
    
    string option(argv[1]);

    if(option == "-c"){
       processCli(); 
    }else if(option == "-u"){
       processUi(); 
    }else{
        //call error when text implemented
        return;
    }
}

void Control::processCli(){



}

void Control::processUi(){


}
