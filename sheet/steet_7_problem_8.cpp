
#include <iostream>

int sequentialSearch(int a[], int search, int index, int n)
{
    int x = 0;
    
    // for when the size that the user enter is less than the index
    if(index >= n)
    {
        return 0;
    }
 
    
    else if (a[index] == search)
    {
        x = index + 1;
        return x;
    }
 
    else
    {
        return sequentialSearch(a, search, index + 1, n);
    }

    return x;

} // end sequentialSearch function
 
int main()
{
    int a[100];
    int n, search, x, m = 0;

    std::cout << "Enter array size: ";
    std::cin >> n; // takes array size from the user
    std::cout << "Enter the array elements: " << std::endl;

    // for loop takes each element in the array
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
 
    std::cout << "Enter the element to search: ";
    std::cin >> search; // user want to search for
    
    x =  sequentialSearch(a, search, 0, n);

    if (x != 0)
    {
        std::cout << "Element found at " << x << std::endl;
    }

    // if the user blugged element that isnt in the array
    else
    {
        std::cout << "Element not found" << std::endl;

    }

    return 0; // indicates that the program ended seccessfully

} // end main function


/*
#include <cstring>
#include <iostream>
using namespace std;

void index(char x[], int n, char k) {
    if (strlen(x) == n) return;
    if (x[n] == k) cout << "Index number = " << n << endl;
    index(x, n + 1,k);
}

int main()
{
    char x[1000];
    cout << "Enter text\n";
    cin.getline(x, 1000);
    char k;
    cout << "Character to search for: ";
    cin >> k;
    if (k >= 'A' && k <= 'Z') k += ('a' - 'A');
    for (int i = 0; i < strlen(x); i++) {
        if (x[i] >= 'A' && x[i] <= 'Z')x[i] += ('a' - 'A');
    }
    index(x, 0, k);
}
*/

