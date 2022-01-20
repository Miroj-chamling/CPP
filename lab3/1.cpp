#include <iostream>
using namespace std;

long hms_to_sec(int hr, int min, int sec)
{
    int res;
    hr = hr * 60 * 60;
    min = min * 60;
    sec = sec;
    res = hr + min + sec;
    return res;
}

int main()
{
    int hr, min, sec;
    cout << "enter the time in hour min and sec in form 12:59:59" << endl;
    cin >> hr >> min >> sec;
    cout << "the total time in second is: " << hms_to_sec(hr, min, sec);
}