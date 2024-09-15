#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float grade;
public:
    Student(string n, int a, float g) {
        name = n;
        age = a;
        grade = g;
    }
};