#include <iostream>
using namespace std;

void case_i()
{
    cout << "p --> q" << endl;
    char A[4] = {'T', 'T', 'F', 'F'}, B[4] = {'T', 'F', 'T', 'F'};

    for (int i = 0; i < 4; i++)
    {
        if (A[i] == 'T' && B[i] == 'F')
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'F' << "\t" << endl;
        }
        else
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'T' << "\t" << endl;
        }
    }
    cout << "-------------------------------------------------" << endl;
    cout << "~q->~p" << endl;

    for (int i = 0; i < 4; i++)
    {
        if (A[i] == 'T')
        {
            A[i] = 'F';
        }
        else if (A[i] == 'F')
        {
            A[i] = 'T';
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (B[i] == 'T')
        {
            B[i] = 'F';
        }
        else if (B[i] == 'F')
        {
            B[i] = 'T';
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (B[i] == 'T' && A[i] == 'F')
        {
            cout << B[i] << "\t" << A[i] << "\t" << 'F' << endl;
        }
        else
        {
            cout << B[i] << "\t" << A[i] << "\t" << 'T' << endl;
        }
    }
}

void case_ii()
{
    cout << "(p->q)v(p->r)" << endl;
    char P[8] = {
        'T',
        'F',
        'T',
        'F',
        'T',
    },
         B[4] = {};
}

int main()
{
    char choice;
    cout << "Proving binary equivalent conditions";
    cout << "i. p->q = ~q->~p" << endl
         << "ii. (p->q)v(p-r) = p->(qvr)" << endl
         << "iii. p<->q = (p^q)v(~p^~q)" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 'i':
        case_i();
        break;

    default:
        break;
    }
}