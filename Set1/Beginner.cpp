#include <iostream>
using  namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;
    if (num1 > num2)
        cout << num1 << " is larger" << endl;
    else if (num2 > num1)
        cout << num2 << " is larger" << endl;
    else
        cout << "Both numbers are equal" << endl;
    if (sum > 100)
        cout << "Sum exceeds 100" << endl;
    else
        cout << "Sum is 100 or less" << endl;
    return 0;
}