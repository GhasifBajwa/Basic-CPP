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
        setAge(a);
        setGrade(g);
    }
    void setAge(int a) {
        if (a >= 5 && a <= 18) {
            age = a;
        } else {
            cout << "Invalid age! Setting age to 0." << endl;
            age = 0;
        }
    }
    void setGrade(float g) {
        if (g >= 1.0 && g <= 4.0) {
            grade = g;
        } else {
            cout << "Invalid grade! Setting grade to 0.0." << endl;
            grade = 0.0;
        }
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    Student student("John", 15, 3.5);
    student.display();
    return 0;
}