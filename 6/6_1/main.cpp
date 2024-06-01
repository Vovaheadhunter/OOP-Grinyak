// Определить класс «Домашнее животное», данные которого включают имя и тип
// животного. Тип животного задавать перечислением типа «Кошка», «Собака», «Хомяк» и
// т.п. Написать функцию, формирующую по заданной двусторонней очереди (шаблонный
// класс queue) объектов класса множество (шаблонный класс set) из элементов очереди. В
// множество включаются животные определенного типа.


#include "animal.h"

int main(){
    Animal A;
    Animal B("Hamlet", "dog");
    Animal C("Brabus", "dog");
    Animal D("Gav", "cat");
    Animal E("Grisha", "hamster");

    std::deque<Animal> animaldeque;
    std::set<Animal> animalset;

    animaldeque.push_back(A);
    animaldeque.push_back(B);
    animaldeque.push_back(C);
    animaldeque.push_front(D);
    animaldeque.push_front(E);

    for (std::deque<Animal>::iterator it = animaldeque.begin(); it != animaldeque.end(); it++) it->info();

    std::cout << "\n" << "--------------------" << "\n";

    animalset = getAnimalOfType(animaldeque, "dog");

    for (std::set<Animal>::iterator it = animalset.begin(); it != animalset.end(); it++) it->info();





    return 0;
}