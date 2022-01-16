#include <iostream>
using namespace std;

int main()
{
    float A[10], B[10], I[10], U[10], cA[10], cB[10];
    int n, i, j;
    cout << "enter the size of the set: ";
    cin >> n;
    cout << "enter the eleemetns of the first set: ";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "enter the elements of the second set: ";
    for (i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    // union
    cout << "the fuzzy union of the two sets is: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i] > B[i])
            {
                U[i] = A[i];
            }
            else
            {
                U[i] = B[i];
            }
        }
    }
    cout << "union : {";
    for (i = 0; i < n; i++)
    {
        cout << "("
             << "X" << i + 1 << "," << U[i] << ")";
    }
    cout << "}";
    // intersection
    cout << "the fuzzy intersection of the two sets is: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i] < B[i])
            {
                I[i] = A[i];
            }
            else
            {
                I[i] = B[i];
            }
        }
    }
    cout << "\n";
    cout << "Intersection: {";
    for (i = 0; i < n; i++)
    {
        cout << "("
             << "X" << i + 1 << "," << I[i] << ")";
    }
    cout << "}";
    // Complement A
    cout << "the complement of set A is: ";
    for (i = 0; i < n; i++)
    {
        cA[i] = 1 - A[i];
    }
    cout << "\n";
    cout << "A complement: {";
    for (i = 0; i < n; i++)
    {
        cout << "("
             << "X" << i + 1 << "," << cA[i] << ")";
    }
    cout << "}";
    // complement B
    cout << "the complement of set A is: ";
    for (i = 0; i < n; i++)
    {
        cB[i] = 1 - B[i];
    }
    cout << "\n";
    cout << "B complement: {";
    for (i = 0; i < n; i++)
    {
        cout << "("
             << "X" << i + 1 << "," << cB[i] << ")";
    }
    cout << "}";
}