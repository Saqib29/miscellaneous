#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> saqib;

    saqib.push(1);
    saqib.push(2);
    saqib.push(3);

    while(!saqib.empty())
    {
        cout << saqib.top() << endl;
        saqib.pop();
    }

}
