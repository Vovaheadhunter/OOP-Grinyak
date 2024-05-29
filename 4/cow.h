#ifndef COW_H
#define COW_H

#include "animal.h"

class Cow : public Animal{
public:
    Cow();
    Cow(std::string name);
    void info();
    void voice();
};


#endif //COW_H
