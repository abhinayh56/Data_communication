#pragma once

#include <string>
#include <iostream>
#include <stdint.h>
#include "Data_element.h"

class Class1
{
public:
    Class1() : de_1(),
               de_2("KEY_12", "PATH_12"),
               de_3("KEY_13", "PATH_13")
    {
    }

    ~Class1()
    {
    }

    void fun_temp()
    {
        de_1.register_key_path("KEY_11", "PATH_11");
    }

    Data_element<uint32_t> de_1;
    Data_element<uint64_t> de_2;
    Data_element<int8_t> de_3;
};
