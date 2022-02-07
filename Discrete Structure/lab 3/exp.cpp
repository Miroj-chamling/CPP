#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int b, m, pow, i;
    int arr[10];
    cout << "enter the value of b, n and m: ";
    cin >> b >> m;
    pow = b % m;
    cout << "enter the value of n in binary: ";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 9; i >= 0; i--)
    {
        if (arr[i] == 1)
        {
            x = (x * pow) % m;
        }
        pow = (pow * pow) % m;
    }
    cout << x;
    return 0;
}