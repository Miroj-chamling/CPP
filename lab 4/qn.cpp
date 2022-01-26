#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l, b, res;

public:
    void getData();
    void calculate();
    void result();
};

void Rectangle::getData()
{
    cout << "enter the length and breadth;";
    cin >> l >> b;
}

void Rectangle::calculate()
{
    res = l * b;
}

void Rectangle::result()
{
    cout << "the area is : " << res;
}

int main()
{
    Rectangle A;
    A.getData();
    A.calculate();
    A.result();
}