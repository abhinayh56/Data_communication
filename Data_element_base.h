#pragma once

#include <string>

class Data_element_base
{
    public:
        Data_element_base()
        {
        }

        ~Data_element_base()
        {
        }

        virtual void register_key_path(std::string key, std::string path) = 0;

        virtual void display_info() = 0;
};
