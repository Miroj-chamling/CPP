// overload function

#include <iostream>
#include <math.h>
using namespace std;

float area(float x, float y)
{
    return x * y;
}

float area(float x)
{
    float pi = 3.14;
    return pi * x * x;
}

float area(float a, float b, float c)
{
    int s;
    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    float rect, tri, circ;
    rect = area(2, 5);
    circ = area(12);
    tri = area(10, 10, 10);
    cout << "the area of reactangle is: " << rect << endl;
    cout << "the area of cirlce is: " << circ << endl;
    cout << "the area of triangle is: " << tri;
}