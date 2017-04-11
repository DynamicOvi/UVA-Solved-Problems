#include<bits/stdc++.h>
using namespace std;
long long f91(long long n)
{
    if(n>=101)
        return n-10;
    else
        return f91(f91(n+11));
}
int main()
{
    long long n,p;
    while(scanf("%lld",&n) && n!=0)
    {
        p=f91(n);
        printf("f91(%lld) = %lld\n",n,p);
    }
    return 0;
}


