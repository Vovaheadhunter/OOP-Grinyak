#include "time.h"
#include<iostream>

int main() 
{

Time tm0;
Time tm1(12, 25, 5);
Time tm2(2, 40, 50);
tm0.info();
tm1.info();
tm2.info();

std::cout << "-10 sec from tm0" << "\n";
tm0.subsec(10);
tm0.info();

std::cout << "+55 sec to tm1" << "\n";
tm1.addsec(55);
tm1.info();

std::cout << "tm1 + tm2" << "\n";
tm1.add(tm2);
tm1.info();

std::cout << "tm1 - tm2" << "\n";
tm1.subtract(tm2);
tm1.info();

return 0;
}