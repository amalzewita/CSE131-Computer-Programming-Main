
#include <iostream>

void reversedArray(int x[], int arraySize)
{
	for (int i = 0; i <= arraySize / 2; i++)
	{
		int replacer = x[i];
		x[i] = x[arraySize - 1 - i];
		x[arraySize - 1 - i] = replacer;
	} // end for loop
} // end sortArray function


void printArray(int x[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << x[i] << " ";
	} // end for loop 
	std::cout << std::endl;
} // end printArray function

int main()
{
	const int arraySize = 10;
	int x[arraySize] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << "Numbers before reversion: ";
	printArray(x, arraySize);
	reversedArray(x, arraySize);
	std::cout << "Reversed Array: ";
	printArray(x, arraySize);
	return 0;
} // end main function