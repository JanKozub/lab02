//
// Created by Jan Kozub on 08/03/2024.
//

#ifndef BIBLITEKAJIPP_LIBRARY_H
#define BIBLITEKAJIPP_LIBRARY_H

#include "string"
#include "Book.h"
#include "Member.h"
#include "vector"

class Library {
private:
    std::vector<Book> books;

public:
    Library();

    void addBook(Book b);
    void removeBook(Book b);
    bool borrowBook(Member &m, std::string isbn);
    bool returnBook(Member &m, std::string isbn);
    void displayBooks();
};


#endif //BIBLITEKAJIPP_LIBRARY_H
