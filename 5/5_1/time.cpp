#include "time.h"
#include<stdlib.h>
#include<iostream>

Time::Time(){
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int ho, int mn, int sc){
    hour = ho;
    minute = mn;
    second = sc;
}

void Time::info(){
    if (hour <0 || minute < 0 || second < 0) std::cout << "-";
    if (abs(hour) < 10) std::cout << 0;
    std::cout << abs(hour) << ":";
    if (abs(minute) < 10) std::cout << 0;
    std::cout << abs(minute) << ":";
    if (abs(second) < 10) std::cout << 0;
    std::cout << abs(second) << "\n";
}

bool Time::operator>(const Time& other) const {
    int thisTotalSeconds = hour * 3600 + minute * 60 + second;
    int otherTotalSeconds = other.hour * 3600 + other.minute * 60 + other.second;
    return thisTotalSeconds > otherTotalSeconds;
};



