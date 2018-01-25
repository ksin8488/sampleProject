//
//  Controller.cpp
//  sampleProject
//
//  Created by Singh, Kashish on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()  //constructor - class, scope resolution operator, member name
{
    
}

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This is the " << index + 1 << " time in the loop" << endl;
    }
}
