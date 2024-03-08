//
// Created by Jan Kozub on 08/03/2024.
//

#include "Library.h"

Library::Library() = default;

void Library::addBook(Book book) {
    books.push_back(book);
}

void Library::removeBook(Book target) {
    for (int i = 0; i < books.size();i++) {
        if (books[i].getIsbn() == target.getIsbn()) {
            books.erase(books.begin()+i);
        }
    }
}

bool Library::borrowBook(Member &m, std::string isbn) {
    for (auto & book : books) {
        if (book.getIsbn() == isbn) {
            if (book.isAvailable()) {
                m.borrowBook();
                book.setAvailable(false);
                return true;
            } else {
                return false;
            }
        }
    }
    return false;
}

bool Library::returnBook(Member &m, std::string isbn) {
    for (auto & book : books) {
        if (book.getIsbn() == isbn) {
            if (!book.isAvailable()) {
                m.returnBook();
                book.setAvailable(true);
                return true;
            } else {
                return false;
            }
        }
    }
    return false;
}

void Library::displayBooks() {
    for (Book book : books) {
        book.getInfo();
    }
}


