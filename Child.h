//
// Created by Christopher Cobb on 2019-07-09.
//

#ifndef CLASSWORK_CLION_CHILD_H
#define CLASSWORK_CLION_CHILD_H

#include <iostream>
#include <string>
using namespace std;

class Child
{
public:
private:
    struct child
    {
        string first = "";
        string last = "";
        int age = 0;
        struct birthdate
        {
            int month;
            int day;
            int year;
        };
    };
    string child_First = "";
    string child_Last = "";
    string guardians_First[2];
};


#endif //CLASSWORK_CLION_CHILD_H
