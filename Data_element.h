#ifndef DATA_STORE_ELEMENT_H
#define DATA_STORE_ELEMENT_H

#include <string>
#include <iostream>
#include <stdint.h>
#include "Data_store.h"

template <typename T>
class Data_element
{
public:
    Data_element()
    {
    }

    Data_element(std::string key, std::string path, T data) : key(key), path(path), data(data)
    {
    }

    ~Data_element()
    {
    }

    bool register_data(uint64_t memory_location)
    {
        this->memory_location = memory_location;
        std::cout << "Registering data element with key: " << this->key << " and path: " << this->path << std::endl;
        return true;
    }

    bool read_data()
    {
        std::cout << "Reading data element with key: " << this->key << " and path: " << this->path << std::endl;
        return true;
    }

    bool write_data()
    {
        std::cout << "Writing data element with key: " << this->key << " and path: " << this->path << std::endl;
        return true;
    }

    Data_store &get_data_store()
    {
        return data_store;
    }

private:
    std::string key = "";
    std::string path = "";
    T data;
    uint8_t index_lock = 0;
    uint8_t index_data = 0;
    bool is_available = false;

    uint64_t memory_location = 0;

    Data_store &data_store = Data_store::getInstance();
};

#endif // DATA_STORE_ELEMENT_H
