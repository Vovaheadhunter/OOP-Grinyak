#ifndef TIME_H
#define TIME_H


class Time{
public:
    int hour;
    int minute;
    int second;
    Time();
    Time(int ho, int mn, int sc);
    void info();
    bool operator>(const Time& other) const;
};



#endif // TIME_H