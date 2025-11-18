#include <stdint.h>
#include <iostream>
#include "Class1.h"
#include "Class2.h"
#include "Data_element.h"

int main()
{
    Class1 o1_1;
    Class1 o1_2;
    Class2 o2_1;
    Class2 o2_2;
    
    std::cout << "&o1_1.de_1.get_data_store(): " << &o1_1.de_1.get_data_store() << std::endl;
    std::cout << "&o1_1.de_2.get_data_store(): " << &o1_1.de_2.get_data_store() << std::endl;
    std::cout << "&o1_1.de_3.get_data_store(): " << &o1_1.de_3.get_data_store() << std::endl;

    std::cout << "&o1_2.de_1.get_data_store(): " << &o1_2.de_1.get_data_store() << std::endl;
    std::cout << "&o1_2.de_2.get_data_store(): " << &o1_2.de_2.get_data_store() << std::endl;
    std::cout << "&o1_2.de_3.get_data_store(): " << &o1_2.de_3.get_data_store() << std::endl;

    std::cout << "&o2_1.de_1.get_data_store(): " << &o2_1.de_1.get_data_store() << std::endl;
    std::cout << "&o2_1.de_2.get_data_store(): " << &o2_1.de_2.get_data_store() << std::endl;
    std::cout << "&o2_1.de_3.get_data_store(): " << &o2_1.de_3.get_data_store() << std::endl;

    std::cout << "&o2_2.de_1.get_data_store(): " << &o2_2.de_1.get_data_store() << std::endl;
    std::cout << "&o2_2.de_2.get_data_store(): " << &o2_2.de_2.get_data_store() << std::endl;
    std::cout << "&o2_2.de_3.get_data_store(): " << &o2_2.de_3.get_data_store() << std::endl;

    return 0;
}
