#pragma once

#include <string>
#include <iostream>
#include <stdint.h>
#include "Data_element.h"

class Class1
{
public:
    Class1() : de_1("KEY_11", "PATH_11", 0),
               de_2("KEY_12", "PATH_12", 0),
               de_3("KEY_13", "PATH_13", 0)
    {
    }

    ~Class1()
    {
    }

    void fun_temp()
    {
    }

    Data_element<uint32_t> de_1;
    Data_element<uint64_t> de_2;
    Data_element<int8_t> de_3;
};
