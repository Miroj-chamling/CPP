#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 2) + fibo(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter the number of terms : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fibo(i);
    }
}