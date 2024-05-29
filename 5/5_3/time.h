#ifndef TIME_H
#define TIME_H

#include <iomanip>


class Time{
public:
    int hour;
    int minute;
    int second;
    Time();
    Time(int ho, int mn, int sc);
    void info();
    bool operator == (const Time& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Time& time);

};



#endif // TIME_H