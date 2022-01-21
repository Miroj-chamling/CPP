#include <iostream>
using namespace std;

struct dist
{
    int feet, inches;
};

void scale(dist &dt);
void display(dist d);

int main()
{
    dist d;
    cout << "enter the distance in feet and inches: ";
    cin >> d.feet >> d.inches;
    scale(d);
}

void scale(dist &dt)
{
    int ft;
    if (dt.inches >= 12)
    {
        ft = dt.inches / 12;
        dt.feet = ft + dt.feet;
        dt.inches = dt.inches % 12;
    }
    display(dt);
}

void display(dist d)
{
    cout << d.feet << "\'" << endl
         << d.inches << "\"";
}
