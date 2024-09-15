#ifndef MEMBER_H
#define MEMBER_H
#include "user.h"
#include <string>
using namespace std;

class Member : public User {
private:
    int booksLoaned;
public:
    Member(string name, int ID);
    Member();
    int getBooksLoaned();
    void loanBook();
    void returnBook();
};
#endif