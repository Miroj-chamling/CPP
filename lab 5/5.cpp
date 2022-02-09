#include <iostream>
using namespace std;

class AddAmount
{
private:
    int amount = 50;

public:
    AddAmount()
    {
    }

    AddAmount(int addedAmount)
    {
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