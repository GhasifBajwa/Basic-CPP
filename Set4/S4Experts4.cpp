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
    virtual void printDetails() {
        cout << "Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
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
    void printDetails() override {
        cout << "Triangle - ";
        Polygon::printDetails();
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
    void printDetails() override {
        cout << "Square - ";
        Polygon::printDetails();
    }
};
template <class T>
class Container {
private:
    T *obj;
public:
    Container(T *o) : obj(o) {}
    void printPolygonDetails() {
        obj->printDetails();
    }
};
int main() {
    Triangle triangle(3, 4);
    Square square(5);
    Container<Triangle> triContainer(&triangle);
    Container<Square> sqContainer(&square);
    cout << "Triangle Details:" << endl;
    triContainer.printPolygonDetails();
    cout << "Square Details:" << endl;
    sqContainer.printPolygonDetails();
    return 0;
}
