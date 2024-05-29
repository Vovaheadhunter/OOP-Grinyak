#ifndef ATM_H
#define ATM_H

#include "mutex"
#include <iostream>
#include "thread"

class atm {
private:
    std::mutex mu;
public:
    int limit;
    int sum;
    atm();
    atm(int sum);
    int withdraw(int balance);
};

#endif //ATM_H