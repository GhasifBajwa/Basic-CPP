#include <iostream>
using namespace std;

class Polygon {
protected:
    float length;
    float width;
public:
    Polygon(float l, float w) : length(l), width(w) {}
    virtual float area() = 0;
    virtual float perimeter() = 0;
};
class Triangle : public Polygon {
public:
    Triangle(float l, float w) : Polygon(l, w) {}
    float area() override {
        return 0.5 * length * width;
    }
    float perimeter() override {
        return length + width;
    }
};
class Square : public Polygon {
public:
    Square(float l) : Polygon(l, l) {}
    float area() override {
        return length * width;
    }
    float perimeter() override {
        return 4 * length;
    }
};
int main() {
    Polygon *triangle = new Triangle(3, 4);
    Polygon *square = new Square(5);
    cout << "Triangle: Area = " << triangle->area() << ", Perimeter = " << triangle->perimeter() << endl;
    cout << "Square: Area = " << square->area() << ", Perimeter = " << square->perimeter() << endl;
    delete triangle;
    delete square;
    return 0;
}
