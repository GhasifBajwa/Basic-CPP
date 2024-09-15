#include "Book.h"
#include "User.h"
#include "Member.h"
#include "LibraryManager.h"
#include <iostream>
using namespace std;

int main() {
    LibraryManager library(100, 100);
    library.addBook("The Catcher in the Rye", "J.D. Salinger", "978-0-316-76948-0");
    library.addBook("To Kill a Mockingbird", "Harper Lee", "978-0-06-112008-4");
    library.addBook("1984", "George Orwell", "978-0-452-28423-4");
    library.addMember("John Doe", 1001);
    library.addMember("Jane Smith", 1002);
    library.loanBook(1001, "978-0-316-76948-0");
    library.loanBook(1002, "978-0-452-28423-4");
    library.displayBooks();
    library.displayMembers();
    library.returnBook(1001, "978-0-316-76948-0");
    library.displayBooks();
    library.displayMembers();
    return 0;
}
