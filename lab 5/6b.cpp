#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth, area;

public:
    Rectangle()
    {
        length = breadth = 0;
        area = length * breadth;
    }
    Rectangle(int a, int b)
    {
        length = a;
        breadth = b;
        area = length * breadth;
    }
    Rectangle(int x)
    {
        length = x;
        breadth = x;
        area = length * breadth;
    }
    void display()
    {
        cout << "thea area is: " << area << endl;
    }
};

int main()
{
    Rectangle a;
    Rectangle b = Rectangle(10, 20);
    Rectangle c = Rectangle(10);
    a.display();
    b.display();
    c.display();
}
