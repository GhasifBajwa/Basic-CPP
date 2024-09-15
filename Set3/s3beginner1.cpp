#include <iostream>
using namespace std;

int main() {
    float num1 = 10.5, num2 = 3.0;
    float result;
    if (num2 != 0) {
        result = num1 / num2;
        cout << "Division result: " << result << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
    return 0;
}