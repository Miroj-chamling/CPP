// area of rectangle with encalsulation

#include <iostream>
using namespace std;

struct area
{
    int x, y, result;
    void input()
    {
        cout << "enter the length and breadth: ";
        cin >> x >> y;
    }
    void ar()
    {
        result = x * y;
    }
    void output()
    {
        cout << "the area is: " << result;
    }
};

int main()
{
    area a;
    a.input();
    a.ar();
    a.output();
    return 0;
}