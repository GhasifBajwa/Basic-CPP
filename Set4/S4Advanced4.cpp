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
    ~Rectangle() {
        cout << "Destructor called." << endl;
    }
};
int main() {
    {
        Rectangle rectangle(5, 4);
        cout << "Area: " << rectangle.calculateArea() << endl;
        cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;
    }
    cout << "Object destroyed." << endl;
    return 0;
}
