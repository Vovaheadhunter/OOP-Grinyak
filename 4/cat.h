#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal{
public:
    Cat();
    Cat(std::string name);
    void info();
    void voice();
};

#endif //CAT_H
