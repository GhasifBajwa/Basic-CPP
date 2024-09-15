#include <iostream>
using namespace std;

class Shape {
protected:
    float radius;
    float length;
    float width;
public:
    Shape(float r) : radius(r), length(0), width(0) {}
    Shape(float l, float w) : length(l), width(w), radius(0) {}
    virtual void displayInfo() = 0;
};
class Circle : public Shape {
public:
    Circle(float r) : Shape(r) {}
    void displayInfo() override {
        cout << "Circle - Radius: " << radius << endl;
        calculateArea();
    }
    void calculateArea() {
        float area = 3.14 * radius * radius;
        cout << "Area of the circle: " << area << endl;
    }
};
class Rectangle : public Shape {
public:
    Rectangle(float l, float w) : Shape(l, w) {}
    void displayInfo() override {
        cout << "Rectangle - Length: " << length << ", Width: " << width << endl;
        calculateArea();
    }
    void calculateArea() {
        float area = length * width;
        cout << "Area of the rectangle: " << area << endl;
    }
};
class Cylinder : public Shape {
private:
    float height;
public:
    Cylinder(float r, float h) : Shape(r), height(h) {}
    void displayInfo() override {
        cout << "Cylinder - Radius: " << radius << ", Height: " << height << endl;
        calculateVolume();
    }
    void calculateVolume() {
        float volume = 3.14 * radius * radius * height;
        cout << "Volume of the cylinder: " << volume << endl;
    }
};
int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Cylinder(3, 7);
    for (int i = 0; i < 3; ++i) {
        shapes[i]->displayInfo();
        cout << endl;
    }
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }
    return 0;
}