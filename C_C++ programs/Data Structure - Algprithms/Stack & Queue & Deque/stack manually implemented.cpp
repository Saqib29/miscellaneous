#include <iostream>
using namespace std;
#define size 10
int mystack[size], top = -1;
void push(int value)
{
    if(top > size-1)
    {
        cout << "Stack is full\n";
    }
    else
    {
        mystack[++top] = value;
    }
}

void pop()
{
    if(top<0)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        top--;
    }
    cout << "pop ended\n";
}
void display()
{
    for(int i=top; i>=0; i--)
    {
        cout << mystack[i] << endl;
    }
}

int main()
{
    push(8);
    push(6);
    push(3);

    display();

    while(top >= 0)
    {
        cout << "pop call\n";
        pop();

    }

    cout << "displaying after pop the stack:\n";
    display();
}
