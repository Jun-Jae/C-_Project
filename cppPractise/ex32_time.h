#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time
{
private:
    int hours;
    int mins;

public:
    Time();
    Time(int, int);
    void addHours(int);
    void addMins(int);
    Time operator+(Time &);
    Time operator*(int);
    void show();
    ~Time();
    friend Time operator*(int n, Time& t) { // 프랜드 선언
        return t * n;
    }
};

#endif // TIME