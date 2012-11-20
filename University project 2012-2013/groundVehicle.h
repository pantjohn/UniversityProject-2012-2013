//
//  groundVehicle.h
//  University project 2012-2013
//
//  Created by Stavros Maras on 11/15/12.
//  Copyright (c) 2012 Stavros Maras. All rights reserved.
//

#ifndef __University_project_2012_2013__groundVehicle__
#define __University_project_2012_2013__groundVehicle__

#include <iostream>

class groundVehicle {

public:

    void setFuel( int);     //set fuel consumption
    int getFuel ();            //get fuel consumption
    void setWater( int);     //set water consumption
    int getWater ();            //get water consumption

private:

    int fuel;               //fuel consumption for this particular vehicle
    int water;              //water consumption for this particular vehicle

};

#endif /* defined(__University_project_2012_2013__groundVehicle__) */
