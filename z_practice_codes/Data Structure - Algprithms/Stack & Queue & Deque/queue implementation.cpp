#include <iostream>
#include <cstdio>
#define size 100
using namespace std;
class QUEUE
{
    int queue[size];
    int front =0, rear = -1;
public:
    void enqueue(int );
    void dequeue();
    void display();
};
void QUEUE::enqueue(int value)
{
    if(rear==size)
    {
        printf("queue is full\n");
    }
    else
    {
        queue[++rear] = value;
    }
}
void QUEUE::dequeue()
{
    if(front==size)
    {
        printf("queue is empty\n");
    }
    else
    {
        front++;
    }
}

void QUEUE::display()
{
    for(int i=front; i<=rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}
int main()
{
    QUEUE obj;
    int d;
    while(scanf("%d", &d) != EOF)
    {
        obj.enqueue(d);
    }
    obj.display();

    cout << "dequeue\n";
    int t;
    cin >> t;
    while(t--)
    {
        obj.dequeue();
    }
    cout << "After dequeue " << t << " times\n" << endl;
    obj.display();
    return 0;

}
