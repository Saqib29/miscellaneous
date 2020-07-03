//Sieve Of Eratosthenes
#include <iostream>
#include <cstdio>
#include <cstring>
#define sc scanf
#define pf printf
using namespace std;
int main()
{
    bool prime[100002];
    int c=100002, n;
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i<=c; i++)
    {
        if(prime[i])
        {
            for(int p=i*i; p<=c; p+=i)
                prime[p] = false;
        }
    }

    sc("%d", &n);

    //for print all primes till n
    /*for(int t=2;  t<=n; t++)
    {
        if(prime[t])
            pf("%d\n", t);
    }*/

    //for print the entered number prime or not!
    if(prime[n])
        pf("%d is prime!\n", n);
    else
        pf("%d is not prime!\n",n);


    return 0;
}
