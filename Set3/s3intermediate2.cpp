#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> num;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = false;
        }
    }
    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}