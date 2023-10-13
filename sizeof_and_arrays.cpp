
#include <iostream>

int main()
{
    // arrays is assigned values
    int values[] = {4, 7, 3, 4};

    // sizeof is used for declaring how many bytes are used
    std::cout << sizeof(values) << std::endl;
    std::cout << sizeof(int) << std::endl;

    // unsigned is used to unsure there is no negative int  
    for(unsigned int i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        std::cout << values[i] << " " << std::flush;
    }

    std::cout << std::endl;
    return 0;
}