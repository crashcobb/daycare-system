//
// Created by Christopher Cobb on 2019-07-09.
//

#ifndef CLASSWORK_CLION_FACILITY_H
#define CLASSWORK_CLION_FACILITY_H

#include <string>
#include <iostream>
#include "Child.h"
#include <vector>
using namespace std;

class Facility
{
public:
    Facility(string &name, string &loc)
    {
        facilityName = name;
        location = loc;
    }
    string getName() const;
    string getLoc() const;
    void addChild();
private:
    string facilityName;
    string location;
    vector <Child> children;
    Child setChildInfo();
};


#endif //CLASSWORK_CLION_FACILITY_H
