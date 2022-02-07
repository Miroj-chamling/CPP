#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag++;
        }
    }
    if (flag == 1)
    {
        cout << "prime";
    }
    else
    {
        cout << "composite";
    }
}