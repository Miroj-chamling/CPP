// union intersection and cartesian product

#include <iostream>
using namespace std;

int main()
{
    int set_a[10], set_b[10];
    int na, nb, grt_card, less_card;
    int i, j;
    int counter = 0;

    cout << "Enter number of elements for set A: ";
    cin >> na;

    cout << "Enter number of elements for set B: ";
    cin >> nb;

    cout << endl;

    for (i = 0; i < na; i++)
    {
        cout << "Enter " << i + 1 << " element for set A: ";
        cin >> set_a[i];
    }

    cout << endl;

    for (j = 0; j < nb; j++)
    {
        cout << "Enter " << j + 1 << " element for set B: ";
        cin >> set_b[j];
    }

    cout << endl;

    if (na > nb)
    {
        grt_card = na;
        less_card = nb;
    }

    else
    {
        grt_card = nb;
        less_card = na;
    }

    cout << "Intersection = "
         << "{ ";

    for (i = 0; i < less_card; i++)
    {
        for (j = 0; j < grt_card; j++)
        {
            if (set_a[i] == set_b[j])
                cout << set_a[i] << " ";
        }
    }

    cout << "}" << endl;

    cout << "Union = "
         << "{ ";

    if (na > nb)
    {
        for (i = 0; i < na; i++)
        {
            cout << set_a[i] << " ";
        }
    }

    else
    {
        for (j = 0; j < nb; j++)
        {
            cout << set_b[j] << " ";
        }
    }

    for (i = 0; i < less_card; i++)
    {
        for (j = 0; j < grt_card; j++)
        {
            if (set_a[i] != set_b[j])
                counter++;
        }
        if (counter == grt_card)
            cout << set_a[i] << " ";

        counter = 0;
    }

    cout << "}" << endl;

    cout << "A X B = { ";

    for (i = 0; i < na; i++)
    {
        for (j = 0; j < nb; j++)
        {
            cout << "(" << set_a[i] << " " << set_b[j] << ")"
                 << " ";
        }
    }

    cout << "}";

    cout << endl;

    cout << "B X A = { ";

    for (j = 0; j < nb; j++)
    {
        for (i = 0; i < na; i++)
        {
            cout << "(" << set_b[j] << " " << set_a[i] << ")"
                 << " ";
        }
    }

    cout << "}";

    return 0;
}