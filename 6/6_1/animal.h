#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <deque>
#include <set>

class Animal{
public:
    std::string name;
    std::string type;
    Animal();
    Animal(std::string name, std::string type);
    void info() const;
    bool operator < (Animal b) const;
};

std::set<Animal> getAnimalOfType(std::deque<Animal> dequeOfAnimal, std::string type);

#endif //ANIMAL_H
