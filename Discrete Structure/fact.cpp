#include <iostream>
using namespace std;

int fact(int);

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    cout << "enter the number of terems: " << endl;
    cin >> n;
    cout << fact(n);
}