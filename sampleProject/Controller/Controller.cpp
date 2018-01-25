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
    for (int index = 0; index < 10; index++)    //for loop to create 10 numbers that are printed to the screen
    {
        cout << "This is the " << index + 1 << " time in the loop" << endl;
    }
    
    //Displays & calls the differnt functions for the arrays
    cout << practiceArray() << endl;
    cout << doubleArray() << endl;
    cout << stringArray() << endl << endl;
    
    //Console Output Assignment
    string name = "Kashish Singh";
    cout << name << endl;
    
    for (int i = 0; i < 28; i++)
    {
        cout << i + 12 << " " << " from 13-31. " << endl;
    }
    
    string *nameAddress = &name;
    cout << "Pointer for my name is, " << nameAddress << endl << endl;
    //cout << &name << endl;        - used to double check if the addresses were actually the same
    
}


//Array Assignment
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
