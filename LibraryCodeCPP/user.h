#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User {
protected:
    string name;
    int ID;
public:
    User(string name, int ID);
    string getName();
    int getID();
};
#endif