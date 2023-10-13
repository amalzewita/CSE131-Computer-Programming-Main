/*
// calculating the area and perimeter
#include <iostream>

int main ()
{
    int x;
    std::cout << "choose your shape: \n 1. Rectangle \n 2. Square \n 3. Circle \n";
    std::cin >> x ;
    if (x == 1) // rectangle
    {
        std::cout << "Insert your length: ";
        double l , w;
        std::cin >> l;
        std::cout << "Insert your width: ";
        std::cin >> w; 
        std::cout << "area: " << l * w << std::endl;
        std::cout << "perimeter: " << (2 * ( l * w )) << std::endl;
    }

    else if (x == 2) // square
    {
        std::cout << "Insert your length: ";
        double a;
        std::cin >> a;
        std::cout << "area: " << a * a << std::endl;
        std::cout << "perimeter: " << 4 * a << std::endl;
    }
    else if (x == 3) // circle
    {
        std::cout << "Insert your Radius: ";
        double r;
        std::cin >> r;
        std::cout << "area: " << (3.14 * r * r) << std::endl;
        std::cout << "perimeter: " << (2 * 3.14 * r) << std::endl;
    }
    else 
    {
        std::cout << "Invalid input. Please try again..." << std::endl;
    }
     return 0;
}// end of main function 
*/


// calculating the area and perimeter
#include <iostream>

int main ()
{
    int x;
    double area , perimeter ;
    std::cout << "choose your shape: \n 1. Rectangle \n 2. Square \n 3. Circle \n";
    std::cin >> x ;
    switch (x)
    {
        case 1: // rectangle
        std::cout << "Insert your length: ";
        double l , w;
        std::cin >> l;
        std::cout << "Insert your width: ";
        std::cin >> w;
        area = l * w;
        perimeter = 2 * ( l * w );
        std::cout << "area: " << area << std::endl;
        std::cout << "perimeter: " << perimeter << std::endl;
        break;

        case 2: // square
        std::cout << "Insert your length: ";
        double a;
        std::cin >> a;
        area = a * a;
        perimeter = 4 * a;
        std::cout << "area: " << area << std::endl;
        std::cout << "perimeter: " << perimeter << std::endl;
        break;

        case 3: // circle
        std::cout << "Insert your Radius: ";
        double r;
        std::cin >> r;
        area = 3.14 * r * r;
        perimeter = 2 * 3.14 * r;
        std::cout << "area: " << area << std::endl;
        std::cout << "perimeter: " << perimeter << std::endl;
        break;

        default:
        std::cout << "Invalid input. Please try again..." << std::endl;

    } // end of switch 

     return 0;

}// end of main function 
