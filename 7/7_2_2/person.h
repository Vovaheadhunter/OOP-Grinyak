#ifndef PERSON_H
#define PERSON_H

#include "atm.h"

class person {
private:
    atm* a_atm;
    static std::mutex con_mu;
public:
    void info();
    std::string fio;
    std::thread thr;
    int balance;
    int moneyOnHands;
    person(atm* a_atm, std::string fio, int moneyOnAccount);
    void static withdraw(person& p);
};

#endif //PERSON_H