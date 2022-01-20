// samller of the two numbers by reference
#include <iostream>
using namespace std;

int zeroSmaller(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int x, y;
    cout << "enter two numbers: ";
    cin >> x >> y;
    cout << "the smaller of the two numbers is: " << zeroSmaller(x, y);
}