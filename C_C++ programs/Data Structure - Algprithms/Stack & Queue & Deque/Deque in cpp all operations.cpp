//deque -->> double ended queue
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> que;
    deque<int>::iterator i; //iterator for STL container
    int choose=0, data;
    int  *it;

    while(choose!=9)
    {
        cout << "1.push_front()\t2.push_back()\t3.pop_front()\t4.pop_back()\n";
        cout << "5.front()\t6.back()\t7.clear\t8.show all elements\t9.exit\n";
        cin >> choose;
        switch(choose)
        {
            case 1: cout << "data for front = ";
                    cin >> data;
                    que.push_front(data);
                    break;
            case 2: cout << "data for back = ";
                cin >> data;
                que.push_back(data);
                break;
            case 3: if(!que.empty())
                    {
                        que.pop_front();
                    }
                    else
                        cout << "Deque is empty!\n";
                    break;
            case 4: if(!que.empty())
                    {
                        que.pop_back();
                    }
                    else
                        cout << "Deque is empty!\n";
                    break;
            case 5: cout << "Top front element is " << que.front() << endl; break;
            case 6: cout << "Top back element is " << que.back() << endl; break;
            case 7: que.clear();
                    cout << "Deque is cleared now\n";
                    break;
            case 8: for(i=que.begin(); i!=que.end(); i++)
                    {
                        if(!que.empty())
                        {
                            cout << *i << endl;
                        }
                        else
                            cout << "Deque is empty\n";
                    }
                    break;

            case 9: return 0;
        }
    }
}
