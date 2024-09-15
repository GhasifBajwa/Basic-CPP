//Experts1
#include <iostream>
using namespace std;

class Animal {
protected:
  string species;
  int age;
public:
  Animal(const string &sp) : species(sp), age(0) {}
  Animal(const string &sp, int a) : species(sp), age(a) {}
  virtual void display() {
    cout << "Species: " << species << ", Age: " << age << endl;
  }
};
int main() {
  Animal animal1("Dog");
  Animal animal2("Cat", 3);
  animal1.display();
  animal2.display();
  return 0;
}
