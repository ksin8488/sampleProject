//
//  Controller.hpp
//  sampleProject
//
//  Created by Singh, Kashish on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp      //these 2 MUST be the same and unique in the project else code won't compile
#define Controller_hpp

#include <iostream>

class Controller
{
private:
    //Just like Java data members and internal methods
protected:                      //Controller class will never have a sub-class. This is just here for sure
    //Used for inheritance (subclasses see it as a public method)
public:
    //Externally visible
    Controller();
    void start();
};

#endif /* Controller_hpp */
