#include <iostream>
using namespace std;

class Vehicle {
protected:
    string type;
public:
    Vehicle(string type) : type(type) {}
    virtual void displayInfo() const {
        cout << "Type: " << type << endl;
    }
};
class Truck : public Vehicle {
private:
    int payloadCapacity;
public:
    Truck(string type, int payloadCapacity) : Vehicle(type), payloadCapacity(payloadCapacity) {}
    void displayInfo() const override {
        cout << "Type: " << type << "\nPayload Capacity: " << payloadCapacity << " tons" << endl;
    }
};
int main() {
    Vehicle vehicle("Car");
    Truck truck("Truck", 100);
    Vehicle* ptrVehicle = &vehicle;
    ptrVehicle->displayInfo();
    ptrVehicle = &truck;
    ptrVehicle->displayInfo();
    return 0;
}