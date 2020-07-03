//checking is parenthesis right or not?
#include <iostream>
#include <string>
using namespace std;
class STACK
{
    string s;                           //declared private string in class
public:
    int for_input();                    //public functions
    int for_check();
    int for_output(int );
};
int STACK::for_input()
{
    getline(cin, s);                    //getting string input
}
int STACK::for_check()                  //this function to check
{
    //should change here
    char string_[100], last_char;       //declaring stack array as string_ name and
    int i, top = 0, len;

    len = s.size();                     //declaring size of the string

    for(i=0; i<len; i++)
    {
        if(s[i] == '(')
        {
            string_[top] = s[i];
            top++;
        }
        else if(s[i] == ')')
        {
            if(top == 0)
                return 0;
            top--;
            last_char = string_[top];
            if(last_char != '(')
                return 0;
        }
    }
    if(top == 0)
        return 1;
    else
        return 0;
}
int STACK::for_output(int item)
{
    if(item)
        cout << s << " is balanced\n";
    else
        cout << s << " is not balanced\n";
}

int main()
{
    int truth;
    STACK obj;
    obj.for_input();
    truth = obj.for_check();
    obj.for_output(truth);

    return 0;
}
