#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> saqib;
    int n, c = 0;
    cout << "stack limit: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        saqib.push(++c);
        cout << "Push: " << saqib.top() << endl;
    }

    cout << "push ended\n\n";
    cout << "pop start\n";
    while(!saqib.empty())
    {
        cout << saqib.top() << endl;
        saqib.pop();
    }
    cout << "All elements popped from stack\n";

    return 0;
}
