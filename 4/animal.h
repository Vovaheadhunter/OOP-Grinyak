#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
public:
    std::string name;
    Animal();
    Animal(std:: string name);
    void info();
    virtual void voice() = 0;
};

#endif //ANIMAL_H
