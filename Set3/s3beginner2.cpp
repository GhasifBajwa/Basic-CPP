#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if (num2 != 0) {
        result = num1 / num2;
        cout << "Division result: " << result << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
    return 0;
}