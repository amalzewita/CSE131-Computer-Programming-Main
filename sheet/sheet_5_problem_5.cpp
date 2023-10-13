
#include <iostream>

int main()
{
    float x[10000], sumOdd = 0, sumEven = 0, n, evenCount, oddCount;
    std::cout << "Enter the number of element: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter the value of x [" << i+1 << "] ";
        std::cin >> x[i];
    }
    for (int i = 0; i < n ; i+=2)
    {
        std::cout << "the value of x [" << i << "] = "<< x[i] << std::endl;
        sumEven += x[i];
        evenCount++;
    }
     for (int i = 1; i < n ; i+=2)
    {
        std::cout << "the value of x [" << i << "] = "<< x[i] << std::endl;
        sumOdd += x[i];
        oddCount++;
    }

    std::cout << "The average of even indexes is " << sumEven / evenCount << std::endl;
    std::cout << "The average of odd indexes is " << sumOdd / oddCount << std::endl;
    return 0;
}
/*
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter 6 numbers: " << endl;
    const int size = 6;
    int x[size];

    for (int i = 0; i < size; i++)
    {
        cin >> x[i];
    }
    int sumEven = 0;
    int sumOdd = 0;
    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            countEven++;
            sumEven += x[i];
        }
        else
        {
            countOdd++;
            sumOdd += x[i];
        }
    }
    cout << "Even: " << sumEven / countEven * 1.0 << endl;
    cout << "Odd: " << sumOdd / countOdd * 1.0 << endl;
    system("pause");
}
*/