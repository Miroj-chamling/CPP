#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int x, y;
    cout << "enter two numbers : ";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    swap(x, y);
    cout << "after swapping: " << endl;
    cout << "x : " << x << endl
         << "y: " << y;
    return 0;
}