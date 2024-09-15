//Biginner4
#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  cout << "Enter an integer: ";
  cin >> num1;
  cout << "Enter a floating-point number: ";
  cin >> num2;
  if (num1 < 0 || num2 < 0) {
    cout << "Negative input detected" << endl;
  } else {
    cout << "All inputs are non-negative"<< endl;
  }
  float product = num1 * num2;
  cout << "The product of " << num1 << " and " << num2 << " is: " << product<< endl;
  if (product > 100) {
    cout << "The product is greater than 100." << endl;
  } else if (product < 100) {
    cout << "The product is less than 100." << endl;
  } else {
    cout << "The product is equal to 100." << endl;
  }
  return 0;
}
