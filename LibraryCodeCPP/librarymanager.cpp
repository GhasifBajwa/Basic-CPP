#include "LibraryManager.h"
#include <iostream>
using namespace std;

LibraryManager::LibraryManager(int maxBooks, int maxMembers) : MAX_BOOKS(maxBooks), MAX_MEMBERS(maxMembers), bookCount(0), memberCount(0) {
    books = new Book[MAX_BOOKS];
    members = new Member[MAX_MEMBERS];
}
LibraryManager::~LibraryManager() {
    delete[] books;
    delete[] members;
}
void LibraryManager::addBook(string title, string author, string ISBN) {
    if (bookCount < MAX_BOOKS) {
        books[bookCount++] = Book(title, author, ISBN);
        cout << "Book added to the library." << endl;
    } else {
        cout << "Library is full. Cannot add more books." << endl;
    }
}
void LibraryManager::addMember(std::string name, int ID) {
    if (memberCount < MAX_MEMBERS) {
        members[memberCount++] = Member(name, ID);
        cout << "Member added to the library." << endl;
    } else {
        cout << "Library member limit reached. Cannot add more members." << endl;
    }
}
void LibraryManager::loanBook(int memberID, string bookISBN) {
    for (int i = 0; i < memberCount; ++i) {
        if (members[i].getID() == memberID) {
            for (int j = 0; j < bookCount; ++j) {
                if (books[j].getISBN() == bookISBN && books[j].isAvailable()) {
                    members[i].loanBook();
                    books[j].setAvailability(false);
                    cout << "Book loaned to member: " << members[i].getName() << endl;
                    return;
                }
            }
            cout << "Book not found or not available." << endl;
            return;
        }
    }
    cout << "Member not found." << endl;
}
void LibraryManager::returnBook(int memberID, string bookISBN) {
    for (int i = 0; i < memberCount; ++i) {
        if (members[i].getID() == memberID) {
            for (int j = 0; j < bookCount; ++j) {
                if (books[j].getISBN() == bookISBN && !books[j].isAvailable()) {
                    members[i].returnBook();
                    books[j].setAvailability(true);
                    cout << "Book returned by member: " << members[i].getName() << endl;
                    return;
                }
            }
            cout << "Book not found or already returned." << endl;
            return;
        }
    }
    cout << "Member not found." << endl;
}
void LibraryManager::displayBooks() {
    cout << "Library Books:" << endl;
    for (int i = 0; i < bookCount; ++i) {
        books[i].displayDetails();
        cout << endl;
    }
}
void LibraryManager::displayMembers() {
    cout << "Library Members:" << endl;
    for (int i = 0; i < memberCount; ++i) {
        cout << "Name: " << members[i].getName() << ", ID: " << members[i].getID() << ", Books Loaned: " << members[i].getBooksLoaned() << endl;
    }
}
