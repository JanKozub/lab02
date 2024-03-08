#include <iostream>
#include "Member.h"
#include "Library.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Member m1("marek");
    Member m2("tomek");

    Library library;

    Book b1("b1", "a1", "1");
    Book b2("b2", "a2", "2");
    Book b3("b3", "a3", "3");
    Book b4("b4", "a4", "4");
    Book b5("b5", "a5", "5");

    library.addBook(b1);
    library.addBook(b2);
    library.addBook(b3);
    library.addBook(b4);
    library.addBook(b5);

    library.displayBooks();

    library.removeBook(b2);
    library.removeBook(b4);

    library.displayBooks();

    library.borrowBook(m1, "1");
    library.borrowBook(m1, "3");

    library.displayBooks();

    printf("%d\n", m1.getBooksBorrowed());

    library.borrowBook(m1, "1");

    library.displayBooks();

    printf("%d\n", m1.getBooksBorrowed());

    library.returnBook(m1, "1");
    library.returnBook(m1, "5");

    library.displayBooks();

    printf("%d\n", m1.getBooksBorrowed());

    return 0;
}
