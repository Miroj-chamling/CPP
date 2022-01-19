#include <iostream>
using namespace std;

struct date
{
    int m, d, y;
};

void display(date dt)
{
    cout << "the date is: " << dt.m << "/" << dt.d << "/" << dt.y;
}

int main()
{
    date dt;
    cout << "Enter the date in the formal dd/mm/yy: ";
    cin >> dt.m >> dt.d >> dt.y;
    display(dt);
    return 0;
}