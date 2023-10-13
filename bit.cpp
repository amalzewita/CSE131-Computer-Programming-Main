#include <iostream>
using namespace std;

void bin(long n) {
    long i;
    cout << "0";
    for (i = 1 << 6; i > 0; i = i / 2) {
        if((n & i) != 0) {
        cout << "1";
        }
        else {
        cout << "0";
        }
    }
}

int main() {
    int i;
    cout << "Insert the number you'd like to get its bit: ";
    cin >>i;
    cout << "8 bit binary representation : ";
    bin(i);
}