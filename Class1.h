#pragma once

#include <string>
#include <iostream>
#include <stdint.h>
#include "Data_element.h"

class Class1
{
public:
    Class1()
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
