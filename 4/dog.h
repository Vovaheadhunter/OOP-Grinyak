#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal{
public:
    Dog();
    Dog(std::string name);
    void info();
    void voice();
};

#endif //DOG_H
