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
    
    cout << practiceArray() << endl;
    cout << doubleArray() << endl;
    cout << stringArray() << endl;
}

int Controller :: practiceArray()
{
    int array[5] = {0, 1, 2, 3, 4};
    return array[3];
}

double Controller :: doubleArray()
{
    double array[10] = {7.7};
    return array[0];
}

string Controller :: stringArray()
{
    string array[1] = {"peacock"};
    return array[0];
}
