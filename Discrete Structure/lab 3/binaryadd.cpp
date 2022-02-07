#include <iostream>
using namespace std;

int main()
{
    int arr_1[10], arr_2[10], res[10];
    int j, n, d, c = 0;
    cout << "enter the number of elements of the array: ";
    for (int i = n; i >= 0; i--)
    {
        cin >> arr_1[i];
    }
    for (int i = n; i >= 0; i--)
    {
        cin >> arr_2[i];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        d = (arr_1[j] + arr_2[j] + c) / 2;
        res[j] = arr_1[j] + arr_2[j] + c - 2 * d;
        c = d;
    }
    res[n - 1] = c;
    for (int i = n; i >= 0; i--)
    {
        cout << res[i] << " ";
    }
    return 0;
}
