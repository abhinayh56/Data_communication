#include <stdint.h>
#include <iostream>
#include "Class1.h"
#include "Class2.h"
#include "Class_sensor.h"

int main()
{
    Class_sensor class_sensor;

    class_sensor.fun_sensor();
    
    class_sensor.disp_data_elements();

    return 0;
}
