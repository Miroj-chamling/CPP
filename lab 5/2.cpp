#include <iostream>
#include <stdlib.h>
using namespace std;

class Account
{
    int acc_no, balance;

public:
    void getData(int x, int y)
    {
        acc_no = x;
        balance = y;
    }
    void transfer(Account A, Account B)
    {
        int transfer;
        char choice;
        cout << "transfer A to B or B to A?" << endl;
        cout << "----------------------------------" << endl
             << "Press A. to transfer to B " << endl
             << "Press B. to transfer from B to A" << endl;
        cout << "----------------------------------" << endl;
        cin >> choice;
        if (choice == 'A' || choice == 'a')
        {
            cout << "Enter transfer amount: ";
            cin >> transfer;
            if (transfer < A.balance)
            {
                B.balance = B.balance + transfer;
                A.balance = A.balance - transfer;
                display(A, B);
            }
            else
            {
                cout << "----------------------------------" << endl;
                cout << "Insufficient Balance!";
            }
        }
        else if (choice == 'B' || choice == 'b')
        {
            cout << "Enter transfer amount: ";
            cin >> transfer;
            if (transfer < B.balance)
            {
                A.balance = A.balance + transfer;
                B.balance = B.balance - transfer;
                display(A, B);
            }
            else
            {
                cout << "----------------------------------" << endl;
                cout << "Insufficient Balance!";
            }
        }
        else
        {
            cout << "----------------------------------" << endl;
            cout << "Invalid Choice";
        }
    }
    void display(Account A, Account B)
    {
        cout << "For Acc A: " << endl;
        cout << "----------------------------------" << endl;
        cout << "Account no: " << A.acc_no << endl
             << "Balance : " << A.balance << endl;
        cout << "----------------------------------" << endl;
        cout << "For Acc B: " << endl;
        cout << "----------------------------------" << endl;
        cout << "Account no: " << B.acc_no << endl
             << "Balance: " << B.balance;
    }
};

int main()
{
    Account A, B, C;
    int acc_no, balance;
    cout << "******************* Miroj Central Finance *******************" << endl;
    cout << "For Account A: " << endl;
    cout << "----------------------------------" << endl;
    cout << "Enter Account Number: " << endl;
    cin >> acc_no;
    cout << "Enter the balance:" << endl;
    cin >> balance;
    A.getData(acc_no, balance);
    cout << "----------------------------------" << endl;
    cout << "For Account B: " << endl;
    cout << "----------------------------------" << endl;
    cout << "Enter Account Number: " << endl;
    cin >> acc_no;
    cout << "Enter the balance:" << endl;
    cin >> balance;
    B.getData(acc_no, balance);
    C.transfer(A, B);
}