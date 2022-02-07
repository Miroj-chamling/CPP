#include <iostream>
using namespace std;

int main()
{
    int q = 0;
    int a, d, r;
    cout << "enter a and d";
    cin >> a >> d;
    if (a >= 0)
    {
        r = a;
        while (r >= d)
        {
            r = r - d;
            q = q + 1;
        }
    }
    else if (a < 0 && r < 0)
    {
        r = d - r;
        q = 1 - q;
    }
    cout << "quotient is: " << q << endl;
    cout << "remainder is: " << r;
}