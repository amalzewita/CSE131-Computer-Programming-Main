
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

int main() 
{
	int freq[10] = { 0 };
	char num[20];
	int x[20];
	cin.getline(num, 20);
	for (int i = 0; i < 20; i++) 
    {
		x[i] = num[i] - '0';
	}
	for (int i = 0; i < 20; i++) 
    {
		++freq[x[i]];
	}
	int max = freq[1];
	int index = 0;
	for (int i = 1; i < 10; i++) 
    {
		if (freq[i] > max) 
        {
			max = freq[i];
			index = i;
		}
	}
	cout << "Maximum count is " << index << " and the count is " << max;
}