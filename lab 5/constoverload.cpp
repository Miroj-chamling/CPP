// Write a program in C++ for constructor overloading to find the sum of two distances
// having feet and inch as the private data. Use constructor without paramer is initialized with 0 &
// other constructor having two different int values.

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int x, int y)
    {
        feet = x;
        inch = y;
    }
    void sum(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;
        if (inch >= 12)
        {
            feet += inch / 12;
            inch = inch % 12;
        }
        display();
    }
    void display()
    {
        cout << feet << "\'" << inch << "\"";
    }
};

int main()
{
    Distance sum;
    Distance d1(4, 12);
    Distance d2(2, 2);
    sum.sum(d1, d2);
}