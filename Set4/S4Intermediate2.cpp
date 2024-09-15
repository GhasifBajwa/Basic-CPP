#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    cout << "Enter " << number << " non-negative integers: ";
    for (int i = 0; i < number; i++) {
        int num;
        int result = 1;
        cin >> num;
        for (int j = 1; j <= num; j++) {
            result *= j;
        }
        cout << "Factorial of " << num << ": " << result << endl;
    }
    return 0;
}
