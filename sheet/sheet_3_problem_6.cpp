
// with for loop
#include <iostream>

// function mean begins program execution
int main()
{
    int sum=0;
    for (int i = 1; i<=100; i++)
    {
        if (i % 6 == 0)
            sum += i;
    }
    std::cout << "Sum = " << sum << std::endl; 
    return 0;
}

/*
//with while loop 
#include <iostream>

// function mean begins program execution
int main()
{
    int sum=0;
    int i=1;

    while (i <= 100)
    {
        i++;

        if (i % 6 == 0)
            sum +=i;
    }

    std::cout << "Sum = " << sum << std::endl; 
    return 0;
}
*/