#include "time.h"
#include<stdlib.h>
#include<iostream>

Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int ho, int mn, int sc)
{
    hour = ho;
    minute = mn;
    second = sc;
}

void Time::info()
{
    if (hour <0 || minute < 0 || second < 0) std::cout << "-";
    if (abs(hour) < 10) std::cout << 0;
    std::cout << abs(hour) << ":";
    if (abs(minute) < 10) std::cout << 0;
    std::cout << abs(minute) << ":";
    if (abs(second) < 10) std::cout << 0;
    std::cout << abs(second) << "\n";
}

 void Time::addsec(int sec) {
     int sum = hour * 3600 + minute * 60 + second + sec;
     hour = sum / 3600;
     minute = sum % 3600 / 60;
     second = sum % 60;
 }

void Time::subsec(int sec) {
     int sum = hour * 3600 + minute * 60 + second - sec;
     
     hour = sum / 3600;
     minute = sum % 3600 / 60;
     second = sum % 60;
 }
void Time::add(Time t2) {
    int sum = (hour +t2.hour) * 3600 + (minute + t2.minute) * 60 + second + t2.second;
     hour = sum / 3600;
     minute = sum % 3600 / 60;
     second = sum % 60;
};

void Time::subtract(Time t2) {
    int sum = (hour - t2.hour) * 3600 + (minute - t2.minute) * 60 + second - t2.second;
     hour = sum / 3600;
     minute = sum % 3600 / 60;
     second = sum % 60;
};


