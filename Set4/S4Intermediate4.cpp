#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    int nums[number];
    cout << "Enter " << number << " non-negative integers: ";
    for (int i = 0; i < number; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < number - 1; i++) {
        for (int j = 0; j < number - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    cout << "Sorted numbers: ";
    for (int i = 0; i < number; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "Prime Check:" << endl;
    for (int i = 0; i < number; i++) {
        int num = nums[i];
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = false;
                }
            }
        }
        cout << num << " is " << (isPrime ? "prime" : "not prime") << endl;
    }
    return 0;
}
