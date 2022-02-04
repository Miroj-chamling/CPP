#include <iostream>
using namespace std;

class Account
{
    long acc_no, balance;

public:
    void getData(long x, long y)
    {
        acc_no = x;
        balance = y;
    }
    void login(long login, Account A)
    {
        int transfer;
        if (login == A.acc_no)
        {
            cout << "login successful!";
            cout << "Enter the transaction amount:";
            cin >> transfer;
            transaction(transfer);
        }
        else
        {
            cout << "login failed!";
        }
    }
    void transaction(int transfer)
    {
        Account A, B;
        B.balance = B.balance + transfer;
        A.balance = A.balance - transfer;
    }
    void display()
    {
        Account A, B;
        cout << A.balance;
        cout << B.balance;
    }
};

int main()
{
    Account A, B, C;
    long acc_no, balance, login;
    cout << "For account A: ";
    cout << "Enter the account number";
    cin >> acc_no;
    cout << "Enter balance: ";
    cin >> balance;
    A.getData(acc_no, balance);
    cout << "For account B: ";
    cout << "Enter the account number: ";
    cin >> acc_no;
    cout << "Enter balance: ";
    cin >> balance;
    B.getData(acc_no, balance);
    cout << "enter the account no. to login: ";
    cin >> login;
    C.login(login, A);
}