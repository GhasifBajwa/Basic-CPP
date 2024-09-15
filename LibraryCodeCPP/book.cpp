#include "Book.h"
using namespace std;
Book::Book(string title, string author, string ISBN) : title(title), author(author), ISBN(ISBN), available(true) {}
Book::Book() : title(""), author(""), ISBN(""), available(false) {}
string Book::getTitle() {
    return title;
}
string Book::getAuthor() {
    return author;
}
string Book::getISBN() {
    return ISBN;
}
bool Book::isAvailable() {
    return available;
}
void Book::setAvailability(bool status) {
    available = status;
}
void Book::displayDetails() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Availability: " << (available ? "Available" : "Not Available") << endl;
}