#ifndef TIME_H
#define TIME_H


class Time
{
public:
    int hour;
    int minute;
    int second;
    Time();
    Time(int ho, int mn, int sc);
    void info();
    void addsec(int sec);
    void subsec(int sec);
    void add(Time t2);
    void subtract(Time t2);
};



#endif // TIME_H