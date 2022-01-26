// Write a program defining a class named Account with three data members for account no,
// name and balance. Define the user needed functions for input and output to display ‘N’ account holders.
// Write a program to exercise this class.
#include <iostream>
#include <string.h>
using namespace std;

class Account
{
private:
    long acc_no, balance;
    char name[30];

public:
    void getData(long x, char n[30], long y)
    {
        acc_no = x;
        balance = y;
        strcpy(name, n);
    }
    void display()
    {
        cout << "the user name is: " << name << endl
             << "the account no is: " << acc_no << endl
             << "the balance is: " << balance << endl;
    }
};

int main()
{
    Account N[10];
    long n, x, y, i;
    char name[30];
    cout << "enter the number of users: ";
    cin >> n;
    cout << "enter the details of the users: ";
    for (i = 0; i < n; i++)
    {
        cout << "for user " << i + 1 << endl;
        cout << "enter the balance: ";
        cin >> y;
        cout << "enter the acc_no ";
        cin >> x;
        cout << "enter the name of the user: ";
        cin >> name;
        N[i].getData(x, name, y);
        cout << "\n";
    }
    cout << " \n";
    for (i = 0; i < n; i++)
    {
        N[i].display();
    }
}