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
    virtual void calculateArea() = 0;
};