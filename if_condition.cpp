
#include <iostream>// <iostream> is used for input and output streams

// function main begins program execution 
int main() 
{
    int x; // first number to be input by user
    int y; // second number to be input by user

    std::cout << "Enter two integers and I will tell you the relationships they satisfy: ";
    std::cin >> x >> y; // read an integer

    // there's no need for ; after the if (logical experation) 
    // beacuse it is only 1 statment
    // and also if you are using if-else you must not add ; 
    // ause if you did so you ended the if condition so the esle has no if
    // else must have if but if can work without else 
    if (x==y)

    // there's no need for {} aftar the if "body" 
    // because it is only 1 statment
        std::cout << x << " is equal to " << y << std::endl;

    else 
    std::cout << x << " is not equal to " << y << std::endl;

}



// here in the if condition the y malhsh lazma 
//so y++ will always embodiment

//int x = 4;
//int y = 2;

//if (x == 3);
//y++ ;
