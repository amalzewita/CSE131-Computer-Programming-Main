
#include <iostream>

int main()
{
    // in multidimensional array, the first [] is for rows; th second [] is for column.
    std::string animals[2][3] = {
        { "fox", "dog", "cat" },
        { "mouse", "squirrel", "parrot" }
    };
    for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
    {
        for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(std::string); j++)
        {
            std::cout << animals[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}