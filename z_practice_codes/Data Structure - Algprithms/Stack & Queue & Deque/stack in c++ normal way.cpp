#include <iostream>
#include <cstdio>
using namespace std;
#define size 3
int stack[size], top = -1;
void push(int value)
{
    if(top>=size-1)
        printf("Stack is overflow!\n");
    else
    {
        stack[++top] = value;
    }
}

void pop()
{
    if(top<0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d Popped from stack\n", stack[top]);
        top--;
    }
}

void display()
{
    for(int i=top; i>=0; i--)
    {
        cout << stack[i];
    }
    cout << endl;
}
int main()
{
    int n;
    push(2);
    push(3);
    push(6);

    display();

    pop();
    pop();
    pop();

    display();
    
    return 0;
}
