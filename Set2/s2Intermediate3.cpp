//Intermediate3
#include <iostream>
using namespace std;

int main() {
    char choice;
    int Sum = 0;
    do {
        int num;
        cout << "Enter an integer: ";
        cin >> num;
        int factorial = 1;
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        Sum += num;
        cout << "Factorial of " << num << " is: " << factorial << endl;
        cout << "Sum after this input: " << Sum << endl;
        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
