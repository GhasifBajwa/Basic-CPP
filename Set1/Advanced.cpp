#include <iostream>
using namespace std;

class Car {
private:
    string make;
    int year;
public:
    Car(string make, int year) : make(make), year(year) {}
    string getMake() const {
        return make;
    }
    int getYear() const {
        return year;
    }
    void setMake(string newMake) {
        make = newMake;
    }
    void setYear(int newYear) {
        year = newYear;
    }
    void displayInfo() const {
        cout << "Make: " << make << ", Year: " << year << std::endl;
    }
};
int main() {
    Car myCar("Toyota", 2022);
    myCar.displayInfo();
    myCar.setMake("Honda");
    myCar.setYear(2023);
    cout << "Updated car info:" << endl;
    myCar.displayInfo();
}