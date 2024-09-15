//Advanced1
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(const string& n, int a) : name(n), age(a) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Person person("John", 30);
    person.display();
    return 0;
}
