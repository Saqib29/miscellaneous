//prime numbers using Sieve of Eratosthenes using <bitset>
#include <iostream>
#include <bitset>
#include <vector>
#include <cmath>
#define sc scanf
#define pf printf
#define ll long long
using namespace std;
const ll sieve_size = 10000010;
const ll half = sqrt(sieve_size);
bitset<sieve_size> bs;

int main()
{
    ll num1;
    bs.reset();
    bs.flip();

    for(ll i=2; i<=half; i++)
    {
        if(bs.test((size_t)i))
        {
            for(ll j=i*i; j<=sieve_size; j+=i)
                bs[j] = false;
        }
    }

    bs.set(1,false);
    while(sc("%lld", &num1) == true)
    {
        if(bs.test((size_t)num1))
            pf("yes %lld is prime!\n", num1);
        else
        {
            pf("It's not a prime!\n");
        }
    }



    return 0;
}
