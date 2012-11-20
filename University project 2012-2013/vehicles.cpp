//
//  vehicles.cpp
//  University project 2012-2013
//
//  Created by Stavros Maras on 11/14/12.
//  Copyright (c) 2012 Stavros Maras. All rights reserved.
//

#include <iostream>

#include "vehicles.h"

using std:: cout;


Vehicle:: Vehicle (int xValue, int yValue){
    
    x = xValue;
    y = yValue;
}

void Vehicle::setX(int xValue){
    
    x = xValue;
}

int Vehicle::getX()  {
    
    return x;
}


void Vehicle::setY(int yValue){
    
    x = yValue;
}

int Vehicle::getY()  {
    
    return y;
}

