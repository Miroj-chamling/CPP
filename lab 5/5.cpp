#include <iostream>
using namespace std;

class AddAmount
{
private:
    int amount = 50;

public:
    AddAmount()
    {
        amount = 50;
    }

    AddAmount(int addedAmount)
    {
        amount = 50;
        amount += addedAmount;
    }

    void display()
    {
        cout << "The amount is: " << amount << endl;
    }
};

int main()
{
    AddAmount a;
    AddAmount A(20);
    a.display();
    A.display();
}