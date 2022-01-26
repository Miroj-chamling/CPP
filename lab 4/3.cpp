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
    void getData(int x, char n[30], char a[30])
    {
        roll_no = x;
        strcpy(name, n);
        strcpy(address, a);
    }
    void display()
    {
        cout << "Student name :" << name << endl
             << "roll no: " << roll_no << endl
             << "address" << address << endl;
    }
};

int main()
{
    Information N[10];
    int x, y, i, n;
    char name[30], address[30];
    cout << "enter the number of students: ";
    cin >> n;
    cout << "enter the data of the student: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "enter the name of the student: ";
        cin >> name;
        cout << "enter the address of the student: ";
        cin >> address;
        cout << "enter the roll number of the student: ";
        cin >> x;
        N[i].getData(x, name, address);
        cout << "\n";
    }
    for (i = 0; i < n; i++)
    {
        N[i].display();
    }
}