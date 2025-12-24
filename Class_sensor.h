#pragma once

#include <string>
#include <iostream>
#include <stdint.h>
#include "Data_element.h"
#include <vector>

class Class_sensor
{
public:
    Class_sensor()
    {
        // read config.txt and register data elements
    }

    ~Class_sensor()
    {
    }

    void fun_sensor()
    {
        std::cout << "Class_sensor::fun_sensor()" << std::endl;

        Data_element<uint32_t> de_1{"sensor1", "/path/to/sensor1"};
        Data_element<uint64_t> de_2{"sensor2", "/path/to/sensor2"};
        Data_element<int8_t> de_3{"sensor3", "/path/to/sensor3"};

        std::cout << data_elements.size() << " data elements registered" << std::endl;
        data_elements.push_back(&de_1);
        std::cout << data_elements.size() << " data elements registered" << std::endl;
        data_elements.push_back(&de_2);
        std::cout << data_elements.size() << " data elements registered" << std::endl;
        data_elements.push_back(&de_3);
        std::cout << data_elements.size() << " data elements registered" << std::endl;
        std::cout << "---" << std::endl;
    }

    void register_data_element()
    {
    }

    void disp_data_elements()
    {
        std::cout << "Class_sensor::disp_data_elements()" << std::endl;
        std::cout << data_elements.size() << " data elements registered" << std::endl;

        for(const auto& de : data_elements)
        {
            de->display_info();
        }        
    }

private:
    std::vector<Data_element_base*> data_elements;
};
