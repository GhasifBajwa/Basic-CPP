//int2
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0) {
        cout << "Error: Size of the array must be a positive integer." << endl;
        return 1;
    }
    int* numbers = new int[size];
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }
    int maxNum = numbers[0];
    int minNum = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
        if (numbers[i] < minNum) {
            minNum = numbers[i];
        }
    }
    cout << "Maximum value: " << maxNum << endl;
    cout << "Minimum value: " << minNum << endl;
    delete[] numbers;
}

