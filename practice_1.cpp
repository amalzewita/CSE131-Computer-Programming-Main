 
 #include <iostream>

// function mean begins program execution
 int main ()
 {
     // double for fractions and upto 15 decimals
     double x , ans; 

     std::cout << "Enter the distance in feet to convert it to meters: ";
     std::cin >> x >> ans;

     // the equation 
     // += means... ans = ans + 0.3048 * x
     ans += 0.3048 * x;

     // output result 
     std::cout << "ans: " << ans << "m" << std::endl;

     return 0; // indicates that the program ended seccessfully 

 } // end function main