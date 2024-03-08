//
// Created by Jan Kozub on 08/03/2024.
//

#ifndef BIBLITEKAJIPP_BOOK_H
#define BIBLITEKAJIPP_BOOK_H

#include <string>
#include <utility>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;

public:
    Book(std::string title, std::string author, std::string isbn);

    const std::string &getTitle() const {return title;}

    void setTitle(const std::string &title) {Book::title = title;}

    const std::string &getAuthor() const {return author;}

    void setAuthor(const std::string &author) {Book::author = author;}

    const std::string &getIsbn() const {return isbn;}

    void setIsbn(const std::string &isbn) {Book::isbn = isbn;}

    bool isAvailable() const {return available;}

    void setAvailable(bool available) {Book::available = available;}

    void getInfo();

    virtual ~Book();
};


#endif //BIBLITEKAJIPP_BOOK_H
