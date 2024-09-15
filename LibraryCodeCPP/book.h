#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    bool available;
public:
    Book(string title, string author, string ISBN);
    Book();
    string getTitle();
    string getAuthor();
    string getISBN();
    bool isAvailable();
    void setAvailability(bool status);
    void displayDetails();
};

#endif
