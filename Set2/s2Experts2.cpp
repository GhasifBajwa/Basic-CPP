//Experts2
#include <iostream>
using namespace std;

class Animal {
protected:
    string species;
    int age;
public:
    Animal(const string& sp) : species(sp), age(0) {}
    Animal(const string& sp, int a) : species(sp), age(a) {}
    virtual void display() {
        cout << "Species: " << species << ", Age: " << age << endl;
    }
};
class Bird : public Animal {
private:
    double wingSpan;
public:
    Bird(const string& sp, double ws) : Animal(sp), wingSpan(ws) {}
    Bird(const string& sp, int a, double ws) : Animal(sp, a), wingSpan(ws) {}
    void display() override {
        Animal::display();
        cout << "Wing Span: " << wingSpan << endl;
    }
};
int main() {
    Bird bird("Eagle", 5, 2.5);
    bird.display();
    return 0;
}
