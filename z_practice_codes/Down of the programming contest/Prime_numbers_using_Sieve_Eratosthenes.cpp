#include <iostream>
#include <cstring>  // need for memset function
using namespace std;

// function to generate prime numbers
void SieveofEratosthenes(int n)
{
    bool primes[n+1];    // boolean type array
    int i, j;
    memset(primes, true, sizeof(primes));  // memset function to keep 1 through the array

    for(i=2; i*i<n; i++)    // condition checking isn't i square root of n?
    {
        if(primes[i])    // checking does it boolean 1 or 0?
        {
            for(j=i*2; j<=n; j += i)  // if 1, then keep false(0) through the array multiply of i number
                primes[j] = false;
        }
    }

    cout << "Primes are : ";  // printing prime numbers
    for(i=1; i<=n; i++)
    {
        if(primes[i])        // if boolean 1, then they are primes,otherwise not!!
            cout << " " << i;
    }
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    SieveofEratosthenes(n);
}
