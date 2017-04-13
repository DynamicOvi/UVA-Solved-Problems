#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q,r,s,u,v,w;
    while(scanf("%d",&t)!=EOF)
    {
        n=1;
        while(1)
        {
            p=n*(n+1)/2;
            if(p>=t)
            {
                break;
            }
            r=p;
            n++;
        }
        s=t-r;
        u=(n-s)+1;
        v=(n-u)+1;
        if(t==1)
            printf("TERM %d IS 1/1\n",t);
        else if(n%2==1)
            printf("TERM %d IS %d/%d\n",t,u,v);
        else
            printf("TERM %d IS %d/%d\n",t,v,u);
    }
    return 0;
}
