#include <iostream>
#include <cstdio>
#include <cmath>
#define sc scanf
#define pf printf
using namespace std;
int main()
{
    int n, m, i;
    bool isprime = true;
    sc("%d", &n);
    m = sqrt(n);
    for(i=3; i<=m; i+=2)
    {
        if(n%i == 0)
        {
            isprime = false;
            break;
        }

    }
    if(n==2)
        pf("%d is prime!\n",n);
    else if(n%2==0)
        pf("%d is not prime!\n", n);
    else if(isprime)
    {
        pf("%d is prime!\n", n);
    }
    else
        pf("%d is not prime!\n", n);

    return 0;
}
