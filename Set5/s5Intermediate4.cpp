//int4
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;


double computeMean(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}


double computeMedian(int arr[], int size) {
    sort(arr, arr + size);
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}


int computeMode(int arr[], int size) {
    unordered_map<int, int> frequencyMap;
    for (int i = 0; i < size; ++i) {
        frequencyMap[arr[i]]++;
    }
    int mode = arr[0];
    int maxFrequency = 0;
    for (auto& pair : frequencyMap) {
        if (pair.second > maxFrequency) {
            mode = pair.first;
            maxFrequency = pair.second;
        }
    }
    return mode;
}

int main() {
    int size;


    cout << "Enter the size of the array: ";
    cin >> size;


    if (size <= 0) {
        cerr << "Error: Size of the array must be a positive integer." << endl;
        return 1;
    }


    int* numbers = new int[size];


    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }


    cout << "Mean: " << computeMean(numbers, size) << endl;


    cout << "Median: " << computeMedian(numbers, size) << endl;


    cout << "Mode: " << computeMode(numbers, size) << endl;


    delete[] numbers;
}
