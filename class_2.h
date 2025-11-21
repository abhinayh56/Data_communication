#pragma once

#include <string>
#include <iostream>
#include "Class_1.h"

class Class_2
{
public:
    Class_2() : member1(4,"example")
    {
        std::cout << "Default constructor called Class_2" << std::endl;
    }

    ~Class_2()
    {
    }

private:
    Class_1 member1;
};