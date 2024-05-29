#include "person.h"


int main() {
    atm atm1;
    atm atm2(75000);

    person p1(&atm1, "Kirsahin D.S.", 35000);
    person p2(&atm1, "Nikolaenko V.M.", 40000);
    person p3(&atm1, "Babiev I.V.", 30000);

    person p4(&atm2, "Bron I.M.", 25000);
    person p5(&atm2, "Potemkin N.V.", 30000);
    person p6(&atm2, "Glushenko V.D.", 40000);


    p1.thr.join();
    p2.thr.join();
    p3.thr.join();

    p4.thr.join();
    p5.thr.join();
    p6.thr.join();

    std::cout << "\n" << atm1.sum << " rubles left in atm1\n";

    p1.info();
    p2.info();
    p3.info();

    std::cout << "\n" << atm2.sum << " rubles left in atm2\n";

    p4.info();
    p5.info();
    p6.info();


    return 0;
}