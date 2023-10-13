
#include <iostream>

int main ()
{
    int numberOfStudents;
    float sum = 0;
    float score;
    float max = -99999999;
    float min = 99999999;
    
    std::cout << "Enter students number: ";
    std::cin >> numberOfStudents;
  

    for (int i = 1; i <= numberOfStudents; i++)
    {
        std::cout << "Enter student " << i << " score: ";
        std::cin >> score;
        
        if ( score > 100 || score < 1)
        {
            std::cout << "ERROR!" << std::endl;
            i--;
            continue;
        }

        sum += score;

        if (score > max)
            max = score;
        if (score < min)
            min = score; 
    }
    std::cout << "Maximum = " << max << std::endl;
    std::cout << "Minimum = " << min << std::endl;
    std::cout << "Average = " << sum / numberOfStudents << std::endl;

    return 0;
}