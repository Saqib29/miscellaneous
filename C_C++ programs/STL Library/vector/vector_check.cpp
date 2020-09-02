#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a[2];
    a[1].push_back(1);
    cout << a[1][0] << endl;
    a[1].push_back(2);
    cout << a[1][1] << endl;

    return 0;
}
