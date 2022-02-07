#include <iostream>

using namespace std;

int main()
{
    int a[4] = {1, 0, 1, 1}, b[4] = {1, 1, 1, 0}, s[5];
    int n = 4, d, c = 0;
    for (int j = n - 1; j >= 0; j--)
    {
        d = (a[j] + b[j] + c) / 2;
        s[j] = a[j] + b[j] + c - 2 * d;
        c = d;
    }
    s[4] = c;
    for (int i = n; i >= 0; i--)
    {
        cout << s[i] << " ";
    }
    return 0;
}