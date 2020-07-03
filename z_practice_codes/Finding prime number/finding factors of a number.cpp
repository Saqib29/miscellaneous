#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    vector<int> d;
    bool prime[100002];
    int s, v = 100002;
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i<=v; i++)
    {
        if(prime[i]== true){
            for(int j=i*i; j<=v; j+=i)
            {
                prime[j] = false;
            }
        }
    }
    int p, cnt, o;
    while(scanf("%d", &s))
    {
    if(prime[s])
    {
        cout << s << " is prime.\n";
    }
    else{
        for(p=2; p<=v; p++)
        {
            if(s%p == 0)
            {
                d.push_back(p);
            }
        }
        cout << s << " is not prime," << "it is divisible by - 1,";
        cnt = d.size();
        for(int o=0; o<cnt; o++)
            cout << d[o] << ",";
    }
    cout << endl;
    d.clear();
    }

    return 0;
}
