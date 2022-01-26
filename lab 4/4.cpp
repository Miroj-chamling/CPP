#include <iostream>
using namespace std;

class Greater
{
private:
    int x, y;

public:
    int compare(int a, int b)
    {
        x = a;
        y = b;
        if (x > y)
        {
            display(x);
        }
        else
        {
            display(y);
        }
        return 0;
    }
    void display(int res)
    {
        cout << "the greater number is: " << res;
    }
};

int main()
{
    Greater A;
    A.compare(2, 4);
    return 0;
}