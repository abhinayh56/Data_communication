#pragma once

#include <string>
#include <iostream>
#include <stdint.h>
#include "Data_element.h"

class Class2
{
public:
    Class2()
    {
    }

    ~Class2()
    {
    }

    void fun_temp()
    {
    }

    Data_element<std::string> de_1;
    Data_element<uint8_t> de_2;
    Data_element<long long> de_3;
};
