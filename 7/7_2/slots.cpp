#include "slots.h"


std::mutex Gambler::con_mu;


slot::slot() { money = 500; }


slot::slot(int money) {this->money = money;}


int slot::roll() {
    mu.lock();
    if (money == 0) {
        mu.unlock();
        return 0;
    }
    int r1 = rand() % 3;
    int r2 = rand() % 3;
    int r3 = rand() % 3;
    int r4 = rand() % 3;
    int winnings;
    if (r1 == r2 && r2 == r3 && r3 == r4) {
        winnings = money;
        money = 0;
    } else if ((r1 == r2 && r2 == r3) || (r1 == r2 && r2 == r4) || (r1 == r3 && r3 == r4) || (r2 == r3 && r3 == r4)) {
        winnings = money / 2;
        money -= winnings;
    } else {
        money += 3;
        winnings = -3;
    }
    mu.unlock();
    return winnings;
}


Gambler::Gambler() {}


Gambler::Gambler(slot* s_slot, int id , int money) {
    this->s_slot = s_slot;
    this->money = money;
    this->id = id;
    rolls = 0;
    thr = std::thread(roll, std::ref(*this));
}


void Gambler::roll(Gambler &g) {
    int amountWon = 0;
    while(true) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        amountWon = g.s_slot->roll();
        if (amountWon == 0) break;
        g.money += amountWon;
    }
}


std::thread* Gambler::getThreadReference()
{
    return &thr;
}
