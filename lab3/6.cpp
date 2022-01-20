#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;

inline float area(float r)
{
    return pi * pow(r, 2);
}

int main()
{
    float r;
    cout << "enter the radius: ";
    cin >> r;
    cout << "the area is: " << area(r);
}