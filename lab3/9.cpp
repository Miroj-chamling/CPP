#include <iostream>
using namespace std;

struct convert
{
    int ft, inch;
};

void display(convert cv)
{
    int r;
    if (cv.inch < 12)
    {
        cout << "the length is : " << cv.ft << "\'" << cv.inch << "\"";
    }
    if (cv.inch >= 12)
    {
        r = cv.inch % 12;
        cv.inch = (cv.inch / 12);
        cv.ft = cv.ft + cv.inch;
        cout << "the length is : " << cv.ft << "\'" << r << "\"";
    }
}

int main()
{
    convert cv;
    cout << "enter the length in feet: ";
    cin >> cv.ft;
    cout << "enter the length in inch: ";
    cin >> cv.inch;
    display(cv);
}