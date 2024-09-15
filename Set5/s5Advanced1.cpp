//Advance1
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    string make;
    string model;
    int year;

public:

    Vehicle(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }


    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {

    Vehicle car("Toyota", "Camry", 2022);


    car.displayInfo();

    return 0;
}
