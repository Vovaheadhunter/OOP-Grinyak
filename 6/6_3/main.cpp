// Описать класс «Книга». Написать программу моделирования работы библиотеки.
// Программа должна обеспечивать начальное формирование данных о всех книгах в
// библиотеке. Кроме того, программа должна обеспечивать имитацию выдачи книги
// читателю: вводится номер книги, программа удаляет данные об этой книге из списка книг
// (если она там есть) находящихся в библиотеке и записывает данные в список книг,
// находящихся на руках. Считать, что книги могут быть в нескольких экземплярах - для
// представления необходимых списков использовать шаблонный класс multimap.


#include "book.h"


int main() {
    std::multimap<int, Book> inLibrary;
    std::multimap<int, Book> onHands;


    inLibrary.emplace(123 , Book("Fight Club","Chuck Palahniuk"));
    inLibrary.emplace(111 , Book("How to Win Friends and Influence People", "Dale Carnegie"));
    inLibrary.emplace(222 , Book("Blood, Sweat, and Pixels", "Jason Schreier"));
    inLibrary.emplace(333 , Book("Press Reset", "Jason Schreier"));
    inLibrary.emplace(444 , Book("Capital", "Karl Marx"));
    inLibrary.emplace(444 , Book("Capital", "Karl Marx"));


    interface(inLibrary, onHands);


    std::cout << "\n" << "Books in the library:" << "\n";
    for (const auto& pair : inLibrary) {
        pair.second.info();
    }


    std::cout << "\n"  << "Books on hands:" << "\n";
    for (const auto& pair : onHands) {
        pair.second.info();
    }



    return 0;
}