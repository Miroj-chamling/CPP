#include <iostream>
using namespace std;

int main()
{
    int A[10], B[10];
    int n, m;
    cout << "enter the size of the first set: ";
    cin >> n;
    cout << "enter the elements of the first set: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "enter the size of the second set: ";
    cin >> m;
    cout << "enter the elements of the second set: ";
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    cout << "A X B: ";
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << A[i] << " " << B[j] << ")";
        }
    }
    cout << "\n";
    cout << "}";
    cout << "B X A: ";
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << B[i] << " " << A[j] << ")";
        }
    }
    cout << "}";
}