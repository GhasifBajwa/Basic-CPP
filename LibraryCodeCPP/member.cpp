#include "Member.h"
#include <iostream>
using namespace std;

Member::Member(string name, int ID) : User(name, ID), booksLoaned(0) {}
Member::Member() : User("",0), booksLoaned(0) {}
int Member::getBooksLoaned() {
    return booksLoaned;
}
void Member::loanBook() {
    if (booksLoaned < 3) {
        booksLoaned++;
        cout << "Book loaned successfully." << endl;
    } else {
        cout << "Cannot loan more books. Maximum limit reached." << endl;
    }
}
void Member::returnBook() {
    if (booksLoaned > 0) {
        booksLoaned--;
        cout << "Book returned successfully." << endl;
    } else {
        cout << "No books to return." << endl;
    }
}
