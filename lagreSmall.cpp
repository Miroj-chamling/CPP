// wap to check the largest and smallest among the three numbers
#include <iostream>
using namespace std;

int large(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int small(int x, int y, int z)
{
    if (x < y && x < z)
    {
        return x;
    }
    else if (y < x && y < z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;
    cout << "the largest number is: " << large(a, b, c) << endl;
    cout << "the smallest number is: " << small(a, b, c);
    return 0;
}