#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    cout << "Enter " << number << " non-negative integers: ";
    for (int i = 0; i < number; i++) {
        int num;
        cin >> num;
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = false;
                }
            }
        }
        cout << num << " is " << (isPrime ? "prime" : "not prime") << endl;
    }
    return 0;
}
