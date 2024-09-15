//int1
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; 
    int numbers[SIZE];
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    int maxNum = numbers[0];
    int minNum = numbers[0];
    for (int i = 1; i < SIZE; ++i) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
        if (numbers[i] < minNum) {
            minNum = numbers[i];
        }
    }x 
    cout << "Maximum value: " << maxNum << endl;
    cout << "Minimum value: " << minNum << endl;
}
