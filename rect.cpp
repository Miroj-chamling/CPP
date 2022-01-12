#include <iostream>
using namespace std;

int main()
{
    int l, b, a, p;
    cout << "enter the length and perimeter : ";
    cin >> l >> b;
    a = l * b;
    p = 2 * (l + b);
    cout << "area is : " << a << endl;
    cout << "perimeter is : " << p;
    return 0;
}