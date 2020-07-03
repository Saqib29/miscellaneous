#include <iostream>
using namespace std;
class Stack
{
    string s;
public:
    int input();
    int checking();
    int output(int );
};
int Stack::input()
{
    getline(cin, s);
}
int Stack::checking()
{
    char Stack[100], last_char;
    int i, top = 0, len;

    len = s.size();
    //cout << len << endl;
    for(i=0; i<len; i++)
    {

        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                Stack[top] = s[i];
                top++;
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(top == 0){
                    return 0;
                }
                top--;
                last_char = Stack[top];
                if(last_char != '(' && last_char != '{' && last_char != '['){
                    //cout << s[i] << " " << i << " here i'm" << top << Stack[top] <<  endl;//
                    //cout << top << endl;
                    return 0;
                }
            }
    }
    if(top == 0)
        return 1;
    else{

        return 0;
    }
}
int Stack::output(int item)
{
    if(item)
        cout << s << " is balanced.\n";
    else
        cout << s << " is not balanced.\n";

}
int main()
{
    int item;
    Stack obj;
    obj.input();
    item = obj.checking();
    //cout << item << endl;
    obj.output(item);


return 0;
}
