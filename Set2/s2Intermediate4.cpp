//Intermediate4
#include <iostream>
using namespace std;

int calculateFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    return factorial;
}
int main() {
    char choice;
    int Sum = 0;
    do {
        int num;
        cout << "Enter an integer: ";
        cin >> num;
        int factorial = calculateFactorial(num);
        Sum += num;
        cout << "Factorial of " << num << " is: " << factorial << endl;
        cout << "Sum after this input: " << Sum << endl;
        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
