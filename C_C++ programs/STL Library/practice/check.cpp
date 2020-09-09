#include <iostream>
#include <stack>
#include <cstring>
#include <string>
#include <cstdio>
#include <cctype>
using namespace std;

stack<string> s;


int main()
{
    s.push("Hello");

    cout << s.size() << endl;
    cout << toupper(s.top()) << endl;

    return 0;
}
