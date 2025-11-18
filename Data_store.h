#pragma once

#include <string>
#include <iostream>
#include <stdint.h>
#include <vector>
#include <map>

class Data_store
{
public:
    Data_store(const Data_store&) = delete;
    
    Data_store& operator=(const Data_store&) = delete;

    static Data_store &getInstance()
    {
        static Data_store instance;
        return instance;
    }

private:
    Data_store()
    {
    }

    ~Data_store()
    {
    }

    std::vector<uint8_t> m_data_buffer;

    std::map<std::string, std::map<std::string, uint64_t>> m_data_element_register;
};
