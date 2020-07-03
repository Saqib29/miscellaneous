#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
int main()
{
    queue<int> my_queue;
    int q = 0, i;
    do
    {
        cout << "Enqueue or Dequeue? 1/0\n";
        cin >> i;
        my_queue.push(++q);
    }while(i==1);
    i=0;
    cout << "Want to dequeue?\n1.yes\n2.no    command 1 or 0\n";
    cin >> i;
    while(i==1)
    {

        if(!my_queue.empty())
        {
            cout << "Next? 1.yes or 2.no    command 1 or 0\n";
            cin >> i;
            if(i == 0) return 0;
            cout << my_queue.front() << " popped from queue\n";
            my_queue.pop();
        }
        else
           {
               cout << "queue is empty\n";
               return 0;
           }
    }
}
