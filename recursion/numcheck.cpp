// wap to check whether the given numbers is positive or negative
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    if (n > 0)
    {
        cout << "positive";
    }
    else if (n < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "zero";
    }
    return 0;
}