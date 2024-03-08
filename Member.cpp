//
// Created by Jan Kozub on 08/03/2024.
//

#include "Member.h"

Member::Member(std::string name) {
    this->name = name;
    booksBorrowed = 0;
}

void Member::borrowBook() {
    if (booksBorrowed < 4294967295)
        booksBorrowed = booksBorrowed + 1;
}

void Member::returnBook() {
    if (booksBorrowed > 0)
        booksBorrowed = booksBorrowed - 1;
}

const std::string &Member::getName() const {return name;}

void Member::setName(const std::string &name) {Member::name = name;}

unsigned int Member::getBooksBorrowed() const {return booksBorrowed;}

void Member::setBooksBorrowed(unsigned int booksBorrowed) {Member::booksBorrowed = booksBorrowed;}


