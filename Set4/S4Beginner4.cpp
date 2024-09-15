#include <iostream>
using namespace std;

int main() {
    int count = 0;
    float max_num = -9999999;
    float min_num = 9999999;
    
    while (count < 5) {
        float num1, num2;
        cout << "Enter two floating-point numbers: ";
        cin >> num1 >> num2;
        cout << "Sum: " << num1 + num2 << endl;
        cout << "Difference: " << num1 - num2 << endl;
        cout << "Product: " << num1 * num2 << endl;
        if (num2 != 0) {
            cout << "Quotient: " << num1 / num2 << endl;
        } else {
            cout << "Cannot divide by zero." << endl;
        }
        if (num1 > max_num){
            max_num = num1;
        }
        if (num2 > max_num){
            max_num = num2;
        }
        if (num1 < min_num){
            min_num = num1;
        }
        if (num2 < min_num){
            min_num = num2;
        }
        count++;
    }
    cout << "Maximum number entered: " << max_num << endl;
    cout << "Minimum number entered: " << min_num << endl;
    return 0;
}
