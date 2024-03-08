//
// Created by Jan Kozub on 08/03/2024.
//

#ifndef BIBLITEKAJIPP_MEMBER_H
#define BIBLITEKAJIPP_MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    unsigned int booksBorrowed;

public:
    Member(std::string name);

    const std::string &getName() const;

    void setName(const std::string &name);

    unsigned int getBooksBorrowed() const;

    void setBooksBorrowed(unsigned int booksBorrowed);

    void borrowBook();

    void returnBook();
};


#endif //BIBLITEKAJIPP_MEMBER_H
