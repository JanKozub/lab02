#include <iostream>
#include "Member.h"
#include "Library.h"
#include "iostream"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Member m1("marek");
    Member m2("tomek");

    Library library;

    std::string t1 = "t1", a1 = "a1", i1 = "1";
    std::string t2 = "t2", a2 = "a2", i2 = "2";
    std::string t3 = "t3", a3 = "a3", i3 = "3";
    std::string t4 = "t4", a4 = "a4", i4 = "4";
    std::string t5 = "t5", a5 = "a5", i5 = "5";

    printf("Podaj tytul 1 ksiazki:");
    getline(cin, t1);
    printf("Podaj autora  ksiazki:");
    getline(cin, a1);
    printf("Podaj isbn 1 ksiazki:");
    getline(cin, i1);

    printf("Podaj tytul 2 ksiazki:");
    getline(cin, t2);
    printf("Podaj autora 2 ksiazki:");
    getline(cin, a2);
    printf("Podaj isbn 2 ksiazki:");
    getline(cin, i2);

    printf("Podaj tytul 3 ksiazki:");
    getline(cin, t3);
    printf("Podaj autora 3 ksiazki:");
    getline(cin, a3);
    printf("Podaj isbn 3 ksiazki:");
    getline(cin, i3);

    printf("Podaj tytul 4 ksiazki:");
    getline(cin, t4);
    printf("Podaj autora 4 ksiazki:");
    getline(cin, a4);
    printf("Podaj isbn 4 ksiazki:");
    getline(cin, i4);

    printf("Podaj tytul 5 ksiazki:");
    getline(cin, t5);
    printf("Podaj autora 5 ksiazki:");
    getline(cin, a5);
    printf("Podaj isbn 5 ksiazki:");
    getline(cin, i5);

    Book b1(t1, a1, i1);
    Book b2(t2, a2, i2);
    Book b3(t3, a3, i3);
    Book b4(t4, a4, i4);
    Book b5(t5, a5, i5);

    library.addBook(b1);
    library.addBook(b2);
    library.addBook(b3);
    library.addBook(b4);
    library.addBook(b5);

    library.displayBooks();

    library.removeBook(b2);
    library.removeBook(b4);

    library.displayBooks();

    library.borrowBook(m1, i1);
    library.borrowBook(m1, i3);

    library.displayBooks();

    printf("%d\n", m1.getBooksBorrowed());

    library.borrowBook(m1, i1);

    library.displayBooks();

    printf("%d\n", m1.getBooksBorrowed());

    library.returnBook(m1, i1);
    library.returnBook(m1, i5);

    library.displayBooks();

    printf("%d\n", m1.getBooksBorrowed());

    return 0;
}
