/*
#include <iostream>
using namespace std;

int main()
{
    float sum=0, n;
    cout << "Enter a number: ";
    cin >> n;

    for (float i = 1; i <=n ; i++ )
    {
         sum += ( ( i * i ) );
    }
    cout << "Sum = " << sum << endl; 
    
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    float sum=0, n;
    cout << "Enter a number: ";
    cin >> n;

    for (float i = 1; i <= n; i++ )
    {
         sum += ( 1 / i );
    }
    cout << "Sum = " << sum << endl; 
    
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    float sum=0, n;
    cout << "Enter a number: ";
    cin >> n;

    for (float i = 1; i <= n; i++ )
    {
         sum += ( (2 * i -1 ) / (i * i) );
    }
    cout << "Sum = " << sum << endl; 
    
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int N;
    float sum=0, K;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Enter a constant: ";
    cin >> K;

    for (float i = 1; i <= N; i++ )
    {
         sum += (i * K);
    }
    cout << "Sum = " << sum << endl; 
    
    return 0;
}
*/


#include <iostream>
using namespace std;

int main()
{
    int N;
    float sum=0, A, B;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Enter a 2 constants: ";
    cin >> A >> B;

    for (float i = 1; i <= N; i++ )
    {
         sum += ( (1) / (A + (B * i) ) );
    }
    cout << "Sum = " << sum << endl; 
    
    return 0;
}


