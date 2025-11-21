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

    Data_element<std::string> de_1{"KEY_21", "PATH_21", "0"};
    Data_element<uint8_t> de_2{"KEY_22", "PATH_22", 0};
    Data_element<long long> de_3{"KEY_23", "PATH_23", 0};
};
