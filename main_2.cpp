#include <stdint.h>
#include <iostream>
#include "Class1.h"
#include "Class2.h"
#include "Data_store.h"

int main()
{
    // Class1 obj_1_1;
    // std::cout << "&obj_1_1.ds_1: " << &obj_1_1.ds_1 << std::endl;
    // std::cout << "&obj_1_1.ds_2: " << &obj_1_1.ds_2 << std::endl;
    // std::cout << "&obj_1_1.ds_3: " << &obj_1_1.ds_3 << std::endl;

    // Class1 obj_1_2;
    // std::cout << "&obj_1_2.ds_1: " << &obj_1_2.ds_1 << std::endl;
    // std::cout << "&obj_1_2.ds_2: " << &obj_1_2.ds_2 << std::endl;
    // std::cout << "&obj_1_2.ds_3: " << &obj_1_2.ds_3 << std::endl;

    // Class1 obj_1_3;
    // std::cout << "&obj_1_3.ds_1: " << &obj_1_3.ds_1 << std::endl;
    // std::cout << "&obj_1_3.ds_2: " << &obj_1_3.ds_2 << std::endl;
    // std::cout << "&obj_1_3.ds_3: " << &obj_1_3.ds_3 << std::endl;

    // Class2 obj_2_1;
    // std::cout << "&obj_2_1.ds_1: " << &obj_2_1.ds_1 << std::endl;
    // std::cout << "&obj_2_1.ds_2: " << &obj_2_1.ds_2 << std::endl;
    // std::cout << "&obj_2_1.ds_3: " << &obj_2_1.ds_3 << std::endl;

    // Class2 obj_2_2;
    // std::cout << "&obj_2_2.ds_1: " << &obj_2_2.ds_1 << std::endl;
    // std::cout << "&obj_2_2.ds_2: " << &obj_2_2.ds_2 << std::endl;
    // std::cout << "&obj_2_2.ds_3: " << &obj_2_2.ds_3 << std::endl;

    // Class2 obj_2_3;
    // std::cout << "&obj_2_3.ds_1: " << &obj_2_3.ds_1 << std::endl;
    // std::cout << "&obj_2_3.ds_2: " << &obj_2_3.ds_2 << std::endl;
    // std::cout << "&obj_2_3.ds_3: " << &obj_2_3.ds_3 << std::endl;

    Class1 obj_1_1;
    std::cout << "&obj_1_1.de_1.ds: " << &obj_1_1.de_1.data_store << std::endl;
    std::cout << "&obj_1_1.de_2.ds: " << &obj_1_1.de_2.data_store << std::endl;
    std::cout << "&obj_1_1.de_3.ds: " << &obj_1_1.de_3.data_store << std::endl;

    Class1 obj_1_2;
    std::cout << "&obj_1_2.de_1.ds: " << &obj_1_2.de_1.data_store << std::endl;
    std::cout << "&obj_1_2.de_2.ds: " << &obj_1_2.de_2.data_store << std::endl;
    std::cout << "&obj_1_2.de_3.ds: " << &obj_1_2.de_3.data_store << std::endl;

    Class1 obj_1_3;
    std::cout << "&obj_1_3.de_1.ds: " << &obj_1_3.de_1.data_store << std::endl;
    std::cout << "&obj_1_3.de_2.ds: " << &obj_1_3.de_2.data_store << std::endl;
    std::cout << "&obj_1_3.de_3.ds: " << &obj_1_3.de_3.data_store << std::endl;

    Class2 obj_2_1;
    std::cout << "&obj_2_1.de_1.ds: " << &obj_2_1.de_1.data_store << std::endl;
    std::cout << "&obj_2_1.de_2.ds: " << &obj_2_1.de_2.data_store << std::endl;
    std::cout << "&obj_2_1.de_3.ds: " << &obj_2_1.de_3.data_store << std::endl;

    Class2 obj_2_2;
    std::cout << "&obj_2_2.de_1.ds: " << &obj_2_2.de_1.data_store << std::endl;
    std::cout << "&obj_2_2.de_2.ds: " << &obj_2_2.de_2.data_store << std::endl;
    std::cout << "&obj_2_2.de_3.ds: " << &obj_2_2.de_3.data_store << std::endl;

    Class2 obj_2_3;
    std::cout << "&obj_2_3.de_1.ds: " << &obj_2_3.de_1.data_store << std::endl;
    std::cout << "&obj_2_3.de_2.ds: " << &obj_2_3.de_2.data_store << std::endl;
    std::cout << "&obj_2_3.de_3.ds: " << &obj_2_3.de_3.data_store << std::endl;

    return 0;
}
