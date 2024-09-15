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
    float length, width;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    Rectangle rectangle(length, width);
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;
    return 0;
}
