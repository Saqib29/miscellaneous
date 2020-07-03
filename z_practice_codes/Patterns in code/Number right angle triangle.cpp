//Number right angle triangle
#include <iostream>
using namespace std;
int main()
{
    int n;
    int row, col;
    cout << "Enter: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
