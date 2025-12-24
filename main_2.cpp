#include <stdint.h>
#include <iostream>
#include "Data_element.h"

int main()
{
    Data_element<uint32_t> de_1{"sensor1", "/path/to/sensor1"};
    Data_element<uint64_t> de_2{"sensor2", "/path/to/sensor2"};
    Data_element<int8_t> de_3{"sensor3", "/path/to/sensor3"};

    return 0;
}
