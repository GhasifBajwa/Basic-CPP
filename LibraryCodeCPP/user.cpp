#include "User.h"
using namespace std;

User::User(string name, int ID) : name(name), ID(ID) {}
string User::getName() {
    return name;
}
int User::getID() {
    return ID;
}
