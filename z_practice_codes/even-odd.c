#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int T, n;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        (n%2 == 0) ? printf("even\n") : printf("odd\n");
    }

    return 0;
}