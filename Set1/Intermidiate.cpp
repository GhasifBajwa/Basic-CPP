#include <iostream>
using namespace std;

void checkNumber(int number) {
    if (number > 0)
        cout << "Positive" << endl;
    else if (number < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
}
int main() {
    int sum = 0;
    int number;
    for (int i = 0; i < 5; ++i) {
        cout << "Enter a number: ";
        cin >> number;
        checkNumber(number);
        sum += number;
    }
    cout << "Sum of all numbers: " << sum << endl;
    return 0;
}