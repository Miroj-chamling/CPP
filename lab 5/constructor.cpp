#include <iostream>
using namespace std;

class Counter
{
    int count;

public:
    Counter() { count = 0; };
    void inc_counter()
    {
        count++;
    }
    int get_count()
    {
        return count;
    }
};

int main()
{
    Counter c1, c2;
    cout << "c1: " << c1.get_count() << endl;
    cout << "c2: " << c2.get_count() << endl;
    c1.inc_counter();
    c2.inc_counter();
    c2.inc_counter();
    cout << "c1: " << c1.get_count() << endl;
    cout << "c2: " << c2.get_count() << endl;
}