#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    int Quotient, Remainder;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if (num2 != 0) {
        Quotient = (int)(num1 / num2);
        Remainder = (int)num1 % (int)num2;
        cout << "Quotient: " << Quotient << endl;
        cout << "Remainder: " << Remainder << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
    return 0;
}