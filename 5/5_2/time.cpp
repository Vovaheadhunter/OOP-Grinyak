#include "time.h"
#include<stdlib.h>
#include<iostream>

Time::Time() {
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int ho, int mn, int sc) {
    hour = ho;
    minute = mn;
    second = sc;
}

void Time::info() {
    if (hour <0 || minute < 0 || second < 0) std::cout << "-";
    if (abs(hour) < 10) std::cout << 0;
    std::cout << abs(hour) << ":";
    if (abs(minute) < 10) std::cout << 0;
    std::cout << abs(minute) << ":";
    if (abs(second) < 10) std::cout << 0;
    std::cout << abs(second) << "\n";
}

bool Time::operator == (const Time& other) const {
    return (hour == other.hour) && (minute == other.minute) && (second == other.second);
};

std::ostream& operator<<(std::ostream& os, const Time& time) {
os << std::setfill('0') << std::setw(2) << time.hour << ":"
<< std::setw(2) << time.minute << ":"
<< std::setw(2) << time.second;
return os;
}

