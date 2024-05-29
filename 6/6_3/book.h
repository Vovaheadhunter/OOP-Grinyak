#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <map>

class Book {
public:
    std::string title;
    std::string author;
    Book();
    Book(std::string title, std::string author);
    void info() const;
    bool operator < (Book b) const;
};

void borrowBook(std::multimap<int, Book>& inLibrary, std::multimap<int, Book>& onHands, int key);
void interface(std::multimap<int, Book>& inLibrary, std::multimap<int, Book>& onHands);

#endif //BOOK_H
