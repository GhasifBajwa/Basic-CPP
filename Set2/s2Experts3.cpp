//Experts3
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
    virtual string makeSound() const {
        return "Animal sound";
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
    string makeSound() const override {
        return "Chirp";
    }
};
int main() {
    Animal* animals[2];
    animals[0] = new Animal("Dog");
    animals[1] = new Bird("Eagle", 5, 2.5);
    for (int i = 0; i < 2; ++i) {
        animals[i]->display();
        cout << "Sound: " << animals[i]->makeSound() << endl;
    }
    return 0;
}
