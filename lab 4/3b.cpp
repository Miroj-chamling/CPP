#include <iostream>
#include <string.h>
using namespace std;

class Information
{
private:
    int roll_no;
    char name[30];
    char address[30];

public:
    void getData();
    void Display();
};

void Information::getData()
{
    cout << "enter the name of the student: ";
    cin >> name;
    cout << "enter the address of the student: ";
    cin >> address;
    cout << "enter the roll number: ";
    cin >> roll_no;
}

void Information::Display()
{
    cout << "Student name: " << name << endl
         << "student address: " << address << endl
         << "Roll no." << roll_no << endl;
}

int main()
{
    Information I[10];
    int n;
    cout << "enter the number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        I[i].getData();
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        I[i].Display();
    }
}