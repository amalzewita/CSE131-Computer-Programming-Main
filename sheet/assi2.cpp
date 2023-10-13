
#include <iostream>
#include <iomanip>

int main() 
{
	int numberOfRow;
	int numberOfColumn;
	int a[1000][1000];

    std::cout << "Enter the number of row = ";
    std::cin >> numberOfRow; // takes number of rows from the user
    std::cout << "Enter the number of column = ";
    std::cin >> numberOfColumn; // takes number of rows from the columns
    std::cout << "Enter you matrix to get the maximum sum hour glass: " << std::endl;

    // takes in the number in the matrix
	for (int i = 0; i < numberOfRow; i++)
	{
		for (int j = 0; j < numberOfColumn; j++)
		{
			std::cin >> a[i][j];
		} // end nested for loop
	} // end for loop

    std::cout << std::endl;

    // for when the matrix is small and there will no be hour glass
    if (numberOfRow < 3 || numberOfColumn < 3)
	{
        std::cout << "NO HOUR GLASS... Choose numbers starting from 3.";
    } //  end iof loop

    // when there is hour glass 
	else
	{
		int maxSum = 0;

        // for loop that goes on the rows 
		for (int i = 0; i < numberOfRow - 2; i++)
		{
            // nested for loop that goes on the coulmns
			for (int j = 0; j < numberOfColumn - 2; j++)
			{
                // the sum of the hour glass matrix
				int sum = (a[i][j] + a[i][j + 1] + a[i][j + 2]) + (a[i + 1][j + 1]) +
					(a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2]);

				maxSum = std::max(maxSum, sum); // it updates to the new maximum sum

                // prints the maximum sum hour glass matrix
				if (sum == maxSum) 
                {
                    std::cout << "The hour glass with the maximum sum: " << std::endl;
					std::cout << a[i][j] << " " << a[i][j + 1] 
                              << " " << a[i][j + 2] << std::endl;
                    std::cout << std::setw(3) << a[i + 1][j + 1] << std::endl;
                    std::cout << a[i + 2][j] << " " << a[i + 2][j + 1] << " " 
                              << a[i + 2][j + 2] << std::endl;
                    std::cout << std::endl;
				} // end nested if loop
			} // end for loop
		} // end nester for loop

		std::cout << "Maximum Sum = " << maxSum << std::endl; // prints the maximum sum

	} // end else 

    return 0; // indicates that the program ended seccessfully

} // end main function