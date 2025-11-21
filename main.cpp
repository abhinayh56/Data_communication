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

    Data_element<uint32_t> de_n1{"KEY_n1", "PATH_n1"};
    Data_element<uint32_t> de_n2("KEY_n2", "PATH_n2");
    Data_element<uint32_t> de_1212("KEY_11", "PATH_11");

    std::cout << "&de_n1.get_data_store(): " << &de_n1.get_data_store() << std::endl;
    std::cout << "&de_n2.get_data_store(): " << &de_n2.get_data_store() << std::endl;
    std::cout << "&de_1212.get_data_store(): " << &de_1212.get_data_store() << std::endl;

    return 0;
}
