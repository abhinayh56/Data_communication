#pragma once

#include <string>
#include <iostream>
#include <stdint.h>
#include <cstdint>
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

    uint8_t* get_data_buffer_ptr()
    {
        return m_data_buffer.data();
    }
    
    void set_data_buffer_size(uint8_t new_size)
    {
        m_data_buffer.resize(new_size);
    }

    size_t get_data_buffer_size()
    {
        return m_data_buffer.size();
    }

    void register_data_element(const std::string &key, const std::string &path, uintptr_t data_ptr)
    {
        m_data_element_register[key][path] = data_ptr;
    }

    bool check_data_element(const std::string &key, const std::string &path, uintptr_t data_ptr)
    {
        return true;
    }

    void write_data()
    {
    }

    void read_data()
    {
    }

private:
    Data_store()
    {
    }

    ~Data_store()
    {
    }

    std::vector<uint8_t> m_data_buffer;

    std::map<std::string, std::map<std::string, uintptr_t>> m_data_element_register;

    uint8_t m_index_available = 0;
};
