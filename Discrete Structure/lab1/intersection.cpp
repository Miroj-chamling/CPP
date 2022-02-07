#include <iostream>
using namespace std;

int main()
{
    int A[10], B[10], I[10];
    int n, m, j, i;
    cout << "enter the size of the first set: ";
    cin >> n;
    cout << "Enter the elements of the first set: ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "enter the size of the second set: ";
    cin >> m;
    cout << "enter the elements of the second set: ";
    for (j = 0; j < m; j++)
    {
        cin >> B[j];
    }
    cout << "{";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                cout << A[i] << " ,";
            }
        }
    }
    cout << "}";

    return 0;
}