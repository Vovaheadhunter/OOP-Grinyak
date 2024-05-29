#include "book.h"


Book::Book(){
    title = "no title";
    author = "no author";
}


Book::Book(std::string title, std::string author){
    this->title = title;
    this->author = author;
}


void Book::info() const {std::cout << title << ", " << author << "\n";}


bool Book::operator < (Book b) const{
    if (author != b.author) return author < b.author;
    else return title < b.title;
}


void borrowBook(std::multimap<int, Book>& inLibrary, std::multimap<int, Book>& onHands, int key) {
    auto range = inLibrary.equal_range(key);
    if (range.first != range.second) {
        auto it = range.first;
        onHands.insert(*it);
        inLibrary.erase(it);
    } else {
        std::cout << "Book by the key " << key << " not found in the library." << "\n";
    }
}


void interface(std::multimap<int, Book>& inLibrary, std::multimap<int, Book>& onHands) {
    if (inLibrary.empty()) std::cout << "there are no books availabe at the moment.";
    else {
        std::cout << "enter a number of books you want to borrow: ";
        int i;
        std::cin >> i;
        for (i > 0; i--;) {
            std::cout << "enter a key of a book you want to borrow: ";
            int key;
            std::cin >> key;
            borrowBook(inLibrary, onHands, key);
        }
    }
}