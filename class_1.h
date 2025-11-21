#pragma once
#include <iostream>
#include <string>

class Class_1
{
public:
    Class_1()
    {
        std::cout << "Default constructor called Class_1" << std::endl;
    }

    Class_1(int a, std::string b)
    {
        std::cout << "Parameterized constructor called Class_1" << std::endl;
        member1 = a;
        member2 = b;
    }

    ~Class_1()
    {
    }

private:
    int member1;
    std::string member2;
};