#include "atm.h"

atm::atm() {
    sum = 100000;
    limit = 10000;
}

atm::atm(int sum) {
    this->sum = sum;
    limit = 10000;
}

int atm::withdraw(int balance) {
    mu.lock();

    int moneyWithdrawn;

    if (balance > limit) moneyWithdrawn = limit;
    else moneyWithdrawn = balance;

    if (sum > moneyWithdrawn) sum -= moneyWithdrawn;
    else {
        moneyWithdrawn = sum;
        sum = 0;
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    mu.unlock();

    return moneyWithdrawn;
}