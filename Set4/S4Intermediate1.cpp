#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    int evenCount = 0, oddCount = 0;
    cout << "Enter " << number << " non-negative integers: ";
    for (int i = 0; i < number; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;
    return 0;
}
   
