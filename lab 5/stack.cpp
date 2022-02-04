#include <iostream>
#define max 20
using namespace std;

class Stack
{
private:
    int s[max];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int x)
    {
        s[++top] = x; // first makes top 0 and pushes the value inside the stack.
    }
    int pop()
    {
        return s[top--]; // pops out the value then decreases the top counter.
    }
};

int main()
{
    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    cout << "number popped: " << s.pop() << endl;
    cout << "number popped: " << s.pop() << endl;
    cout << "number popped: " << s.pop() << endl;
}