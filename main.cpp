#include <stdint.h>
#include <iostream>
#include <fstream>
#include "Class_sensor.h"
#include <map>

int main()
{
    std::ifstream file("config.txt");
    if (!file.is_open())
    {
        std::cerr << "Failed to open config.txt" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }
    file.close();

    // Class_sensor class_sensor;
    // class_sensor.fun_sensor();
    // class_sensor.disp_data_elements();

    return 0;
}
