/*
#include <iostream>

int main() 
{
    unsigned long long fib1 = 2, fib2 = 3, fibNext = 0;
    std::cout << "Fibonacci Series: " << std::endl;

    for (unsigned long long i = 2; i <= 100; ++i) 
    {
        if (i == 2) 
        {
            std::cout << fib1 << std::endl;
            continue;
        }// end nested if loop 

        if (i == 3) 
        {
            std::cout << fib2 << std::endl;
            continue;
        } // end nested if loop 

        fibNext = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibNext;
        std::cout << fibNext << std::endl;
    } // end for loop 

    std::cout << std::endl;

    return 0;
} // end main function 
*/


#include <iostream>

int fibArray(int n)
{
    int x[100];
	x[0]= 1;
    x[1] = 1;

	for(int i = 2; i <= n; i++)
    {
        x[i] = x[i - 1] + x[i - 2];
    }

	return x[n];
}

int fibRecursion(int n)
{
    if (n <= 2)
        return n;
    return fibRecursion(n - 1) + fibRecursion(n - 2);
}
 
int main ()
{
    int n;
    std::cout << "Enter Fibonacci number you want: ";
    std::cin >> n;
    std::cout << "Fibonacci using array = " << fibArray(n) << std::endl;
    std::cout << "Fibonacci using recursion = " << fibRecursion(n) << std::endl;
    getchar();
    return 0;
}


/*
#include <iostream>

int main() 
{
    const int size = 100;
    unsigned long long x[100];
    x[0] = 1;
    x[1] = 1;
    
    std::cout << "Fibonacci Series: " << std::endl;

    // for loop that print all the 100 Fibonacci numbers 
    for (unsigned long long i = 2; i < 100; ++i) 
    {
        x[i] = x[i - 1] + x[i - 2];
        std::cout << x[i] << std::endl;
    } // end for loop 
    
    return 0;// indicates that the program ended seccessfully 

} // end main function 
*/