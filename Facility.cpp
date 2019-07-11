//
// Created by Christopher Cobb on 2019-07-09.
//

#include "Facility.h"


string Facility:: getName() const
{
    return facilityName;
}

string Facility:: getLoc() const
{
    return location;
}

void Facility::addChild()
{
    children.push_back(setChildInfo());
}

Child Facility::setChildInfo()
{
    Child kid;
    // output
    // user input
    return kid;
}