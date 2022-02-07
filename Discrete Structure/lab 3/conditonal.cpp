#include <iostream>
using namespace std;

void conditionall()
{
    cout << "p --> q" << endl;
    char A[4] = {'T', 'T', 'F', 'F'}, B[4] = {'T', 'F', 'T', 'F'};
    for (int i = 0; i < 4; i++)
    {
        if (A[i] == 'T' && B[i] == 'F')
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'F' << endl;
        }
        else
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'T' << endl;
        }
    }
}

void biConditional()
{
    cout << "p <--> q" << endl;
    char A[4] = {'T', 'T', 'F', 'F'}, B[4] = {'T', 'F', 'T', 'F'};
    for (int i = 0; i < 4; i++)
    {
        if ((A[i] == 'T' && B[i] == 'F') || (A[i] == 'F' && B[i] == 'T'))
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'F' << endl;
        }
        else
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'T' << endl;
        }
    }
}

void inverse()
{
    cout << "~p --> ~q" << endl;
    char A[4] = {'T', 'T', 'F', 'F'}, B[4] = {'T', 'F', 'T', 'F'};
    for (int i = 0; i < 4; i++)
    {
        if (B[i] == 'T' && A[i] == 'F')
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'F' << endl;
        }
        else
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'T' << endl;
        }
    }
}

void contrapositive()
{
    cout << "~q --> ~p" << endl;
    char A[4] = {'T', 'T', 'F', 'F'}, B[4] = {'T', 'F', 'T', 'F'};
    for (int i = 0; i < 4; i++)
    {
        if (A[i] == 'T' && B[i] == 'F')
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'F' << endl;
        }
        else
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'T' << endl;
        }
    }
}

void converse()
{
    cout << "q --> p" << endl;
    char A[4] = {'T', 'T', 'F', 'F'}, B[4] = {'T', 'F', 'T', 'F'};
    for (int i = 0; i < 4; i++)
    {
        if (B[i] == 'T' && A[i] == 'F')
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'F' << endl;
        }
        else
        {
            cout << A[i] << "\t" << B[i] << "\t" << 'T' << endl;
        }
    }
}

int main()
{
    int choice;
    cout << "1. conditional" << endl
         << "2. Biconditional " << endl
         << "3. Inverse" << endl
         << "4. Contrapositive" << endl
         << "5. Converse" << endl;

    cout
        << "-------------------------" << endl;
    cout << "enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        conditionall();
        break;
    case 2:
        biConditional();
        break;
    case 3:
        inverse();
        break;
    case 4:
        contrapositive();
        break;
    case 5:
        converse();
        break;
    default:
        break;
    }
}