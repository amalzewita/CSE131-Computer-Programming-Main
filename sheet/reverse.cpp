#include <iostream>
using namespace std;

/* A function to reverse digits of i */
int reverseDigits(int n) {
    int reverse = 0;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    return reverse;
}

int main() {
    int n;
    cout << "Insert the number you'd like to reverse: ";
    cin >> n;
    cout << "The reversed number: \n" << reverseDigits(n);
    return 0;
}
