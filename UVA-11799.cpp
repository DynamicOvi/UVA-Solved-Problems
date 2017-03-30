#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,max,n,a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        max=0;
        for(j=1;j<=n;j++)
        {
            cin>>a;
            if(a>max)
                max=a;
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}

