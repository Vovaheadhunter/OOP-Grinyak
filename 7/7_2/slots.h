#ifndef SLOTS_H
#define SLOTS_H


#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <ctime>


class Gambler;


class slot {
public:
    std::mutex mu;
    int money;
    slot();
    slot(int money);
    int roll();
};


class Gambler {
private:
    Gambler();
    slot* s_slot;
    static std::mutex con_mu;
public:
    std::thread thr;
    int rolls;
    int id;
    int money;
    Gambler(slot* sl, int id, int money);
    void static roll(Gambler& g);
    std::thread* getThreadReference();
};


#endif //SLOTS_H
