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
    Rectangle(const Rectangle &other) {
        length = other.length;
        width = other.width;
    }
    float calculateArea() {
        return length * width;
    }
    float calculatePerimeter() {
        return 2 * (length + width);
    }
};
int main() {
    Rectangle rectangle1(5, 4);
    Rectangle rectangle2 = rectangle1;
    cout << "Area of rect2: " << rectangle2.calculateArea() << endl;
    cout << "Perimeter of rect2: " << rectangle2.calculatePerimeter() << endl;
    return 0;
}
