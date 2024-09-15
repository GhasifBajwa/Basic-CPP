//Intermediate2
#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        int num;
        cout << "Enter an integer: ";
        cin >> num;
        int factorial = 1;
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " is: " << factorial << endl;
        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
