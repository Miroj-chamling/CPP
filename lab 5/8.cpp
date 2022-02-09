#include <iostream>
using namespace std;

class Add
{
private:
    int length, breadth;

public:
    Add()
    {
        cout << "Default constructor initialized..." << endl;
    }
    Add(int x, int y)
    {
        length = x;
        breadth = y;
    }
    int area()
    {
        int area;
        area = length * breadth;
        return area;
    }
    void sum(int a1, int a2)
    {
        int total;
        total = a1 + a2;
        display(total);
    }
    void display(int res)
    {
        cout << res << endl;
    }
    // destructor
    ~Add()
    {
        cout << "Destructor is initialized..." << endl;
    }
};

int main()
{
    int c, d;
    Add sum;
    Add a(10, 10);
    Add b(10, 10);
    c = a.area();
    d = b.area();
    sum.sum(c, d);
}