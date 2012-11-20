//
//  vehicles.h
//  University project 2012-2013
//
//  Created by Stavros Maras on 11/14/12.
//  Copyright (c) 2012 Stavros Maras. All rights reserved.
//

#ifndef __University_project_2012_2013__vehicles__
#define __University_project_2012_2013__vehicles__

#include <iostream>

class Vehicle {
    
public:
  
    Vehicle (int, int);  //constructor
    void setX( int);     //set coordinate x
    int getX ();            //get coordinate x
    void setY( int);     //set coordinate y
    int getY ();            //get coordinate y
     
   // void setCoordinates (int, int);  //keep each spot coordinates (not sure if necessary yet)

private:
    
    int x;              //declaration of coordinate x
    int y;              //declaration of coordinate y
    
};



#endif /* defined(__University_project_2012_2013__vehicles__) */
