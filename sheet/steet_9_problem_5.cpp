
#include <iostream>

int GetValues(char* Text, double* Values) 
{
    int nValues = 0;
    char * a;
    a = strtok(Text, " ");
    
    while (a != NULL)
    {
        Values[nValues] = atof(a);
        a = strtok(NULL, " ");
        nValues++;
    } // end while loop

    return nValues;
} // end GetValues function

int main() 
{
    char Text[] = "7672.28 276763.22 0.767 1.2878 772.2 1878 152 0.0123"; 
    double Values[100];
    int nValues;
    nValues = GetValues(Text, Values);

    for(int i = 0; i < nValues; i++) 
    {
        std::cout << Values[i] << std::endl;
    } // end for loop

    return 0; // indicates that the program ended seccessfully

} // end main function 