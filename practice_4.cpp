
// calculating the area and perimeter
#include <iostream>

int main ()
{
    int x;
    double area , perimeter ;
    std::cout << "choose your shape: \n 1. Rectangle \n 2. Square \n 3. Circle \n";
    std::cin >> x ;

        if ( x == 1) {
        std::cout << "Insert your length: ";
        double l , w;
        std::cin >> l;
        std::cout << "Insert your width: ";
        std::cin >> w;

        area = l * w;
        perimeter = 2 * ( l * w );

            std::cout << "area: " << area << std::endl;
            std::cout << "perimeter: " << perimeter << std::endl ;

    } //end of if

        else if ( x == 2) {
        std::cout << "Insert your length: ";
        double a;
        std::cin >> a;

        area = a * a;
        perimeter = 4 * a;

            std::cout << "area: " << area << std::endl;
            std::cout << "perimeter: " << perimeter << std::endl ;

    }//end of 1st else if

        else if (x == 3) {
        std::cout << "Insert your Radius: ";
        double r;
        std::cin >> r;

        area = 3.14 * r * r;
        perimeter = 2 * 3.14 * r;

            std::cout << "area: " << area << std::endl;
            std::cout << "perimeter: " << perimeter << std::endl ;

    }//end of 2nd else if

    else 
    std::cout << "Invalid input \t";

    return 0;

} // end of main function