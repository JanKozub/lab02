//
// Created by Jan Kozub on 08/03/2024.
//

#include "Book.h"
#include <string>


Book::Book(std::string title, std::string author, std::string isbn): title(title), author(author), isbn(isbn), available(true){
}

void Book::getInfo() {
    std::string isAvailable = available ? "yes" : "no";
    printf("Title: %s, Author: %s, isbn: %s, book available: %s\n", title.c_str(), author.c_str(), isbn.c_str(), isAvailable.c_str());
}

Book::~Book() {
    printf("Niszczę książkę\n");
}
