#include <iostream>
#include <stack>
using namespace std;

typedef class
{
    stack<int> saqib;
public:
    int response();
    int push(int );
    int pop();
    int top();

}STACK;

int STACK::response()
{
    int n;
    cin >> n;
    return n;
}
int STACK::push(int n)
{
    saqib.push(n);
}

int STACK::top()
{
    cout << "top: " << saqib.top() << endl;
}

int STACK::pop()
{
    if(!saqib.empty()){
        cout << saqib.top() << " Popped from stack." << endl;
        saqib.pop();
    }
    else{
        cout << "Stack is empty!\n"; // doesn't print when stack is empty!
    }

}
int main()
{
    char c;
    int item;
    STACK obj;
    do{
    item = obj.response();
    obj.push(item);
    cout << "DO you want to push more? y/n?\n";
    cin >> c;
    }while(c != 'n');

    cout << "Do you want to pop? y/n\n";
    cin >> c;
    if(c == 'y'){
    do{
    obj.top();
    obj.pop();


    //cout << item;// << "popped from the stack\n";
    cout << "DO you want to pop more? y/n?\n";
    cin >> c;
    }while(c != 'n');
    }
    else 
        cout << "ok.\n";

    return 0;
}
