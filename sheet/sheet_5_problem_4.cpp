
#include <iostream>

double averageArray(int a[], int arraySize)
{
    int sum = 0;

	// for loop to calculate the sum of the input of the user 
    for (int i = 0; i < arraySize; i++)
    {
		sum += a[i];
	} // end for loop

    return (sum * 1.0) / arraySize; // returns to the main function the average value

} // end averageArray function

double maximumArray(int a[], int arraySize)
{
    int max = a[1];

	// for loop to calculate the maximun number
    for (int i = 0; i < arraySize; i++)
    {
        if (a[i] > max)
            max = a[i];
    } // end for loop 

    return max; // returns to the main function the maximun value

}// end maximumArray function

double minimumArray(int a[], int arraySize)
{
    int min = a[1];

	// for loop to calculate the minimum number
    for (int i = 0; i < arraySize; i++)
    {
        if (a[i] < min)
            min = a[i];
    } // end for loop 

    return min; // returns to the main function the minimum value

}// end minimumArray function

void sortArray(int a[], int arraySize)
{
	for (int i = 0; i <= arraySize - 2; i++)
	{
		for (int j = i + 1; j <= arraySize - 1; j++)
		{
			// if loop that does the sorting by replacing the values
			if (a[j] < a[i])
			{
				int replacer = a[i];
				a[i] = a[j];
				a[j] = replacer;

			} // end nested if loop 
		} // end nested for loop
	} // end for loop
} // end sortArray function

double medianArray(int a[], int arraySize)
{
    float median = 0;

	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize - 1; j++)
		{
			// if loop that sort the number to get the median
			if (a[j] > a[j + 1])
			{
				int replacer = a[j];
				a[j] = a[j + 1];
				a[j + 1] = replacer;
			}// end nested if loop 
		} // end nesdted for loop 
	} // end for loop 

	// if loop for even inputs  
	if (arraySize % 2 == 0)
	{
		median = (a[arraySize / 2] + a[(arraySize / 2) - 1]) / 2.0;
	} // end if loop 

	// for odd inputs 
	else
	{
		median = a[(arraySize / 2)];
	} // end else 

	return median; // returns to the main function the median value

}// end medianArray function

double modeArray(int a[], int arraySize)
{
    int counter = 1;
	int max = 0;
	int mode = a[0];

	for (int term = 0; term < arraySize - 1; term++)
	{
		if (a[term] == a[term + 1])
		{
			counter++;
			if (counter > max)
			{
				max = counter;
				mode = a[term];
			} // end nested if  loop 
		} // end nested if  loop 
		else
			counter = 1;
	} // end for loop 

	return mode; // returns to the main function the mode value

} // end modeArray function

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
	} // end for loop
    
    std::cout << "Average = " << averageArray(a, arraySize) << std::endl; // prints the average
    std::cout << "Maximum Number = " << maximumArray(a, arraySize) << std::endl; // prints the maximum
    std::cout << "Minimum Number = " << minimumArray(a, arraySize) << std::endl; // prints the minimum

    sortArray(a, arraySize); // calling the sortArray function
    std::cout << "Sorted Numbers =  ";

	// for loop to print the sorted numbers 
	for (int i = 0; i <= arraySize - 1; i++)
    {
        std::cout << a[i] << " ";
    } // end for loop

    std::cout << std::endl;
    std::cout << "Median = " << medianArray(a, arraySize) << std::endl; // prints the median
    std::cout << "Mode = " << modeArray(a, arraySize) << std::endl; // print the mode 

    return 0;// indicates that the program ended seccessfully 
	
} // end main function

