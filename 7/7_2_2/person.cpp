#include "person.h"

std::mutex person::con_mu;

person::person(atm *a_atm, std::string fio, int balance) {
    moneyOnHands = 0;
    this->a_atm = a_atm;
    this->fio = fio;
    this->balance = balance;
    thr = std::thread(withdraw, std::ref(*this));
}

void person::info() {
    std::cout << fio << " withdrawn " << moneyOnHands << " rubles and has " << balance << " rubles left on balance\n";
}

void person::withdraw(person &p) {
    int moneyWithdrawn = 0;
    while (true) {

        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        moneyWithdrawn = p.a_atm->withdraw(p.balance);
        if (moneyWithdrawn == 0) break;
        p.balance -=moneyWithdrawn;
        p.moneyOnHands += moneyWithdrawn;

        con_mu.lock();
        std::cout << p.fio << " withdrawn " << moneyWithdrawn << " rubles\n";
        con_mu.unlock();
    }
}