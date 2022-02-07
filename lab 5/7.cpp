#include <iostream>
using namespace std;

class Employee
{
private:
    int id, salary;
    char name[30];

public:
    Employee(int x, int y, char n[30])
    {
        id = x;
        salary = y;
        name[30] = n[30];
    }
};

int main()
{
}