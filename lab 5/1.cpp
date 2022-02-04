#include <iostream>
using namespace std;

class Complex
{
    int x, y;

public:
    void getData(int a, int b)
    {
        x = a;
        y = b;
    }
    Complex sum(Complex A, Complex B)
    {
        Complex C;
        C.x = A.x + B.x;
        C.y = A.y + B.y;
        return C;
    }
    void display()
    {
        cout << x << "+" << y << "i" << endl;
    }
};

int main()
{
    Complex A, B, C;
    int a, b, c, d;
    cout << "for first complex number: " << endl;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    A.getData(a, b);
    cout << "for second complex number: " << endl;
    cout << "Enter the numbers:";
    cin >> c >> d;
    B.getData(c, d);
    C = C.sum(A, B);
    A.display();
    B.display();
    C.display();
}