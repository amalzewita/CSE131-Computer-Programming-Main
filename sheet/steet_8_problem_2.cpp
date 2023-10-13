
#include <iostream>

int main()
{
    char str[5][50], replacer[20];
    int i, j;
    std::cout << "Enter any five names: " << std::endl; 

    for(i = 0; i < 5; i++)
    {
        std::cin >> str[i]; 
    } // for loop

    for(i = 1; i < 5; i++) 
    {
        for(j = 1; j < 5; j++) 
        {
            if(strcmp(str[j - 1], str[j]) > 0) 
            {
                strcpy(replacer, str[j - 1]); 
                strcpy(str[j - 1], str[j]); 
                strcpy(str[j], replacer);
            } // nested if loop
        } // nested for loop
    } // for loop

    std::cout << "Names after sorting: " << std::endl; 
    for(i = 0; i < 5; i++)
    {
        std::cout << str[i]<< std::endl;
    }
    return 0;
} // end main function 