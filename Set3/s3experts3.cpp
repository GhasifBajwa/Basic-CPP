#include <iostream>
using namespace std;

class Shape {
protected:
    float radius;
    float length;
    float width;
public:
    Shape(float r) : radius(r) {}
    Shape(float l, float w) : length(l), width(w) {}
    virtual void displayInfo() = 0;
};
class Cylinder : public Shape {
private:
    float height;
public:
    Cylinder(float r, float h) : Shape(r), height(h) {}
    void displayInfo() override {
        cout << "Cylinder - Radius: " << radius << ", Height: " << height << endl;
        calculateArea();
    }
    void calculateArea() {
        float volume = 3.14 * radius * radius * height;
        cout << "Volume of the cylinder: " << volume << endl;
    }
};