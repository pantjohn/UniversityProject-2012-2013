
//
//  Console.h
//  University project 2012-2013
//
//  Created by Stavros Maras on 11/29/12.
//  Copyright (c) 2012 Stavros Maras. All rights reserved.
//

#ifndef __University_project_2012_2013__Console__
#define __University_project_2012_2013__Console__

#include <iostream>


class Console{
    
public:
    
    void displayMessage() const;        //show welcome message
    void getChoise(int );                //save user's choise
    
    
private:
    
    int choise;
    
    
};

#endif /* defined(__University_project_2012_2013__Console__) */
