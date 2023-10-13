
#include <iostream>

int main()
{
	char x[1000];
    std::cout << "enter a text: "; 
    std::cin.getline( x, 1000, '\n'); 
	std::cout << "Reversed text: ";
    for (int i = strlen(x); i > 0; i--)
	{
		std::cout << x[i - 1];
	} // end for loop
	std::cout << std::endl;
	return 0;
} // end main function