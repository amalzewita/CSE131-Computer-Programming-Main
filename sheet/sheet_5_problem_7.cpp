
#include <iostream>

int main()
{
    srand(time(0));
    int x[250];
    int first = 0, last = 0, count = 0;
    for (int i = 0; i < 250; i++) 
    {
        x[i] = (rand() % 5) + 10;
    } // end for loop 
    for (int j = 0; j < 250; j++) 
    {
        if (x[j] == 12 && count == 0) 
        {
            first = last = j;
            count++;
        } // end nested if loop 
        if (x[j] == 12 && count > 0) 
        {
            last = j;
        } // end nested if loop 
    } // end for loop 
    std::cout << "First occurrence " << first << std::endl;
    std::cout << "Last occurrence " << last << std::endl;
    return 0;
}


///////////////////////////////////////////// eh el 5ara da ??????