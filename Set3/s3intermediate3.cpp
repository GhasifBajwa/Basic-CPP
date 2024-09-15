#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Prime numbers up to " << num << " are: ";
    for (int i = 2; i <= num; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Sum of prime numbers up to " << num << " is: " << sum << endl;
    return 0;
}