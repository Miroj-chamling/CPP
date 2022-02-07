#include <iostream>
using namespace std;
int main()
{
    int arr_1[10], arr_2[10], arr[10], c[10], d[10];
    int n, m, k = 0, l = 1, x = 2;
    cout << "enter the value first no.";
    for (int i = 0; i < 3; i++)
    {
        cin >> arr_1[i];
    }
    cout << "enter the value of the second number: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> arr_2[i];
    }
    for (int i = 2; i >= 0; i++)
    {
        if (i == 2)
        {
            for (int j = 2; j >= 0; j++)
            {
                if (arr_2[i] == arr_1[j])
                {
                    arr[k] = 1;
                    k++;
                }
                else
                {
                    arr[k] = 0;
                    k++;
                }
            }
        }
        else if (i == 1)
        {
            for (int j = 2; j >= 0; j++)
            {
                if (arr_2[i] == arr_1[j])
                {
                    c[l] = 1;
                    l++;
                }
                else
                {
                    c[l] = 0;
                    l++;
                }
            }
        }
        else if (i == 0)
        {
            for (int j = 2; j >= 0; j++)
            {
                if (arr_2[i] == arr_1[j])
                {
                    d[x] = 1;
                    x++;
                }
                else
                {
                    d[x] = 0;
                    x++;
                }
            }
        }
    }
}