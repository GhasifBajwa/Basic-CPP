#ifndef LIBRARYMANAGER_H
#define LIBRARYMANAGER_H
#include "Book.h"
#include "Member.h"
using namespace std;

class LibraryManager {
private:
    const int MAX_BOOKS;
    const int MAX_MEMBERS;
    Book *books;
    Member *members;
    int bookCount;
    int memberCount;
public:
    LibraryManager(int maxBooks, int maxMembers);
    ~LibraryManager();
    void addBook(string title, string author, string ISBN);
    void addMember(string name, int ID);
    void loanBook(int memberID, string bookISBN);
    void returnBook(int memberID, string bookISBN);
    void displayBooks();
    void displayMembers();
};

#endif
