
#include <iostream> 
#include <math.h>

int polynomial(int a[], int size, int x)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i] * pow(x, size - 1 - i);
	}
	return sum;
}
int main()
{
	int arraySize;
	std::cout << "Enter array size: ";
	std::cin >> arraySize;
    std::cout << "Enter sequence of numbers: ";
    int a[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		std::cin >> a[i];
	} 
	int x;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << polynomial(a, arraySize, x) << std::endl;

	return 0;
}