#include <iostream>
#define Q_size 5
using namespace std;

class QUEUE
{
    int data[Q_size+1];
    int head=0, tail=0;
public:
    void enqueue(int );
    int dequeue();
    void display_tail();
    void display_head();
};
void QUEUE::enqueue(int item)
{
    if((tail+1)%(Q_size+1) == head)
    {
        cout << "Queue is full\n";
        return;
    }
    data[tail] = item;
    display_tail();
    tail = (tail+1)%(Q_size+1);
}
int QUEUE::dequeue()
{
    if(tail == head)
    {
        cout << "Queue is empty\n";
        return -1;
    }
    display_head();
    head = (head+1)%(Q_size+1);
}
void QUEUE::display_head()
{
    cout << "value = " << data[head] << " " << " head = " << head << endl;
}
void QUEUE::display_tail()
{
    cout << "tail = " << tail << endl;
}
int main()
{
    QUEUE my_q;
    int i;
    for(i=1; i<=Q_size+2; i++)
    {
        my_q.enqueue(i);
    }
    for(i=0; i<Q_size; i++)
    {
        my_q.dequeue();
    }
    return 0;
}
