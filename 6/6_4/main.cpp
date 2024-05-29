#include "store.h"


int main() {
    Store<float, 20> s1;
    s1.add(1.1);
    s1.add(4.1);
    s1.add(2.0);
    s1.add(3);
    s1.add(5);
    s1.add(7);
    s1.add(6);
    s1.add(8);
    s1.add(10);
    s1.add(11);
    s1.add(12);
    s1.add(7);
    s1.add(9);
    s1.add(5);
    s1.add(3);
    s1.add(2);
    s1.add(4);
    s1.add(1);


    std::cout << "Forward iteration:\n";
    for (auto it = s1.begin(); it != s1.end(); ++it) {
        std::cout << *it << "\n";
    }


    std::cout << "\nReverse iteration:\n";
    for (auto it = s1.last(); it != s1.begin(); --it) {
        std::cout << *it << "\n";
    }


    return 0;
}




