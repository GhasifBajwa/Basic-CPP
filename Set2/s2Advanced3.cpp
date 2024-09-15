//Advanced3
#include <iostream>
using namespace std;

class Person {
private:
  string name;
  int age;
public:
  Person(const string &n, int a) : name(n), age(a) {}
  void display() { cout << "Name: " << name << ", Age: " << age << endl; }
  void setName(const string &n) { name = n; }
  void setAge(int a) {
    if (a > 0) {
      age = a;
    }
  }
};
int main() {
  Person person("John", 30);
  person.display();
  person.setName("Alice");
  person.setAge(25);
  person.display();

  return 0;
}
