#include <iostream>
using namespace std;

int main()
{
    int A[10], B[10], U[10], M[20];
    int n, m, j, i, k = 0, t;
    cout << "enter the size of the first set: ";
    cin >> n;
    cout << "Enter the elements of the first set: ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
        M[i] = A[i];
    }
    k = i;
    cout << "enter the size of the second set: ";
    cin >> m;
    cout << "enter the elements of the second set: ";
    for (i = 0; i < m; i++)
    {
        cin >> B[i];
        M[k] = B[i];
        k++;
    }

    for (i = 0; i < k; i++)
    {
        for (j = i + 1; j < k; j++)
        {
            if (M[i] == M[j])
            {
                for (t = j; t < k - 1; t++)
                {
                    M[t] = M[t + 1];
                }
                k--;
                j--;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << M[i] << " ";
    }

    return 0;
}