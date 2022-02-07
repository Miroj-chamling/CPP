#include <iostream>
using namespace std;

class Account
{
private:
    int acc_no, balance;

public:
    void getData();
    void transfer(Account, Account);
    void display(Account, Account);
};

void Account::getData()
{
    cout << "Enter account number: " << endl;
    cin >> acc_no;
    cout << "Enter Amount: " << endl;
    cin >> balance;
}

void Account::transfer(Account A, Account B)
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
        if (transfer <= A.balance)
        {
            B.balance = B.balance + transfer;
            A.balance = A.balance - transfer;
            cout << "###########" << B.balance;
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
        if (transfer <= B.balance)
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

void Account::display(Account A, Account B)
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
int main()
{
    Account A, B, C;
    A.getData();
    B.getData();
    C.transfer(A, B);
}