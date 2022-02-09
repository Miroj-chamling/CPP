// sum of n natural numbers using recursion
#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return sum(n - 1);
    }
}

int main()
{
    int n;
    cout << "enter the number of terms: " << endl;
    cin >> n;
    cout << sum(n);
}