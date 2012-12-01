//
//  Console.cpp
//  University project 2012-2013
//
//  Created by Stavros Maras on 11/29/12.
//  Copyright (c) 2012 Stavros Maras. All rights reserved.
//

#include "Console.h"

using std:: cout;
using std:: cin;

void Console::displayMessage() const{
    
    cout<< "Enter your choise\n";
    cout<< "1-Play simulation\n";
    cout<< "2-Get informations about the vehicles";
    cout<< "3-Add vehicles";
    cout<< "4-Exit simulation";
    
}//end of class displayMessage


void Console::getChoise(int choise)
{
    bool test = false;
    
    while (!test) {
        
    cin>> choise;
    
    if (choise==1){
    
    }
    else if (choise==2){
        
    }
    else if (choise==3){
        
    }
    else if (choise==4){
            test=true;
    }
    else
        cout<<"Invalid input. Please try again";
    
   }
}
