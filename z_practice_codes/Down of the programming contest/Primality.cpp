#include <iostream>
using namespace std;
int is_prime(int n)
{
    if(n<=1) return 0;
    for(int i=2; i*i<n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cout << "Enter the number: ";
    cin >> t;
    if(is_prime(t))
    {
        cout << t << " is prime\n";
        return 0;
    }
    cout << "is not prime\n";
    return 0;

}
