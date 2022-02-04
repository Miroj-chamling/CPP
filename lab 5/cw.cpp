#include <iostream>
using namespace std;

class Time
{
    int hr, min;

public:
    void getTime(int hour, int minutes)
    {
        hr = hour;
        min = minutes;
    }
    Time sum(Time t1, Time t2)
    {
        Time t3;
        t3.hr = t1.hr + t2.hr;
        t3.min = t1.min + t2.min;
        if (t3.min > 60)
        {
            t3.hr += t3.min / 60;
            t3.min = t3.min % 60;
        }
        return t3;
    }
    void display()
    {
        cout << hr << ":" << min;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.getTime(1, 30);
    t2.getTime(1, 60);
    t3 = t3.sum(t1, t2);
    t3.display();
}