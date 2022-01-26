#include <iostream>
using namespace std;

class toConvert
{
private:
    int c, f;

public:
    void inputData(int x)
    {
        c = x;
    }
    void conversion()
    {
        f = (c * 9 / 5) + 32;
        display(f);
    }
    void display(int res)
    {
        cout << "the converted temperature is: " << res;
    }
};

int main()
{
    toConvert p1;
    int x;
    cout << "enter the temp in celcius: ";
    cin >> x;
    p1.inputData(x);
    p1.conversion();
}