#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    float calculateArea() {
        return length * width;
    }
    float calculatePerimeter() {
        return 2 * (length + width);
    }
};
int main() {
    Rectangle rectangle(5, 4);
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;
    return 0;
}
