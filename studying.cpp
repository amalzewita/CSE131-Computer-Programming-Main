
#include <iostream>

int Multiply (int a, int b)
{
    return a * b;
}

void MultiplyAndLog ( int a, int b )
{
    int result1 = Multiply (a, b);
    std::cout << result1 << std::endl;
}

int main() 
{
    MultiplyAndLog (2, 3);
    MultiplyAndLog (4, 3);
    MultiplyAndLog (5, 4);
    std::cin.get();
    return 0;
}