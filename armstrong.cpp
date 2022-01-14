#include <iostream>
using namespace std;

int armstrong(int n)
{
    int r, s = 0;
    while (n != 0)
    {
        r = n % 10;
        s = s + r * r * r;
        n = n / 10;
    }
    return s;
}

int main()
{
    int n, res;
    cout << "Enter the number : ";
    cin >> n;
    if (n == armstrong(n))
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrng";
    }
}