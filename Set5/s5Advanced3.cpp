// Advance3
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string make;
    string model;
    int *year;
    string *description;

public:
    Vehicle(string make, string model, int year) : make(make), model(model), year(year)
    {
        description = new string("No description");
    }
    virtual ~Vehicle()
    {
        delete description;
    }
    virtual void displayInfo()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Description: " << *description << endl;
    }
    void setDescription(const string &desc)
    {
        *description = desc;
    }
};
class Car : public Vehicle
{
private:
    int doors;

public:
    Car(string make, string model, int year, int doors) : Vehicle(make, model, year), doors(doors) {}
    void displayInfo() override
    {
        cout << "Car Information:" << endl;
        Vehicle::displayInfo();
        cout << "Doors: " << doors << endl;
    }
};
class Truck : public Vehicle
{
private:
    int capacity;

public:
    Truck(string make, string model, int year, int capacity) : Vehicle(make, model, year), capacity(capacity) {}
    void displayInfo() override
    {
        cout << "Truck Information:" << endl;
        Vehicle::displayInfo();
        cout << "Capacity: " << capacity << " tons" << endl;
    }
};
int main()
{

    Car car("Toyota", "Camry", 2022, 4);
    car.setDescription("Compact sedan");
    Truck truck("Ford", "F-150", 2021, 2);
    truck.setDescription("Full-size pickup truck");
    car.displayInfo();
    cout << endl;
    truck.displayInfo();
}
