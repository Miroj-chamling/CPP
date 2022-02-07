#include <iostream>
using namespace std;

class Test
{
private:
    long code;
    int price;

public:
    Test(long x, int y)
    {
        code = x;
        price = y;
    }
    Test(Test &t)
    {
        code = t.code;
        price = t.price;
    }
    void display()
    {
        cout << "code: " << code << endl
             << "Price: " << price << endl;
    }
};

int main()
{
    Test t1(123, 200);
    Test t2 = t1;
    cout << "original" << endl;
    t1.display();
    cout << "copy" << endl;
    t2.display();
}