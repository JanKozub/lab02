#include <iostream>
#include "Member.h"
#include "Library.h"
#include "iostream"
#include "string"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Member m1("marek");
    Member m2("tomek");

    Library library;

    std::string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15;

    printf("Podaj tytul 1 ksiazki:");
    getline(cin, s1);
    printf("Podaj autora  ksiazki:");
    getline(cin, s2);
    printf("Podaj isbn 1 ksiazki:");
    getline(cin, s3);

    printf("Podaj tytul 2 ksiazki:");
    getline(cin, s4);
    printf("Podaj autora 2 ksiazki:");
    getline(cin, s5);
    printf("Podaj isbn 2 ksiazki:");
    getline(cin, s6);

    printf("Podaj tytul 3 ksiazki:");
    getline(cin, s7);
    printf("Podaj autora 3 ksiazki:");
    getline(cin, s8);
    printf("Podaj isbn 3 ksiazki:");
    getline(cin, s9);

    printf("Podaj tytul 4 ksiazki:");
    getline(cin, s10);
    printf("Podaj autora 4 ksiazki:");
    getline(cin, s11);
    printf("Podaj isbn 4 ksiazki:");
    getline(cin, s12);

    printf("Podaj tytul 5 ksiazki:");
    getline(cin, s13);
    printf("Podaj autora 5 ksiazki:");
    getline(cin, s14);
    printf("Podaj isbn 5 ksiazki:");
    getline(cin, s15);

    Book b1(s1, s2, s3);
    Book b2(s4, s5, s6);
    Book b3(s7, s8, s9);
    Book b4(s10, s11, s12);
    Book b5(s13, s14, s15);

    library.addBook(b1);
    library.addBook(b2);
    library.addBook(b3);
    library.addBook(b4);
    library.addBook(b5);

    library.displayBooks();

    library.removeBook(b2);
    library.removeBook(b4);

    library.displayBooks();

    library.borrowBook(m1, s6);
    library.borrowBook(m1, s13);

    library.displayBooks();

    printf("%d\n", m1.getBooksBorrowed());

    library.borrowBook(m1, s3);

    library.displayBooks();

    printf("%d\n", m1.getBooksBorrowed());

    library.returnBook(m1, s3);
    library.returnBook(m1, s15);

    library.displayBooks();

    printf("%d\n", m1.getBooksBorrowed());

    return 0;
}
