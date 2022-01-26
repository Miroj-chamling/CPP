#include <iostream>
using namespace std;

class FindingSum
{
private:
    int feet, inch;

public:
    void getData(int x, int y)
    {
        feet = x;
        inch = y;
    }
    void sum(FindingSum A, FindingSum B)
    {
        feet = A.feet + B.feet;
        inch = A.inch + B.inch;
        if (inch >= 12)
        {
            feet += inch / 12;
            inch = inch % 12;
        }
        display();
    }
    void display()
    {
        cout << feet << "\'" << inch << "\"";
    }
};

int main()
{
    FindingSum A, B, C;
    int x, y;
    A.getData(2, 12);
    B.getData(3, 1);
    C.sum(A, B);
}