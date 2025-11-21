#include <iostream>
#include <map>
#include <string>
#include <cstdint>

int main()
{
    std::map<std::string, std::map<std::string, uintptr_t>> m_data_element_register;

    int a = 10;
    double b = 3.14;

    m_data_element_register["Integers"]["a"] = reinterpret_cast<uintptr_t>(&a);
    m_data_element_register["Doubles"]["b"] = reinterpret_cast<uintptr_t>(&b);

    uintptr_t raw_ptr_a = m_data_element_register["Integers"]["a"];
    int *ptr_a = reinterpret_cast<int *>(raw_ptr_a);

    uintptr_t raw_ptr_b = m_data_element_register["Doubles"]["b"];
    double *ptr_b = reinterpret_cast<double *>(raw_ptr_b);

    std::cout << "Value of a: " << *ptr_a << std::endl;
    std::cout << "Value of b: " << *ptr_b << std::endl;

    std::cout << "\nIterating through nested map:\n";
    for (const auto &category : m_data_element_register)
    {
        std::cout << "Key: " << category.first << "\n";

        for (const auto &item : category.second)
        {
            std::cout << "  Key: " << item.first << ", stored pointer: " << item.second << "\n";
        }
    }

    return 0;
}
