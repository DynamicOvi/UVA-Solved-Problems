#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i;
    while(cin>>n>>k>>m)
    {
        if(n==0 && k==0 && m==0)
            break;
        int a[n+1];
        for(i=1;i<=n;i++)
            a[i]=0;
        int p1=0,p2=n+1;
        while(1)
        {
            int it=0,x,y;
            for(i=p1;;)
            {
                i++;
                if(i>n)
                    i=i-n;
                if(a[i]==0)
                {
                    it++;
                }
                if(it==k)
                {
                    x=i;
                    break;
                }
            }
            it=0;
            for(i=p2;;)
            {
                i--;
                if(i<1)
                    i=i+n;
                if(a[i]==0)
                {
                    it++;
                }
                if(it==m)
                {
                    y=i;
                    break;
                }
            }
            if(x!=y)
            {
                printf("%3d%3d",x,y);
                a[x]=1;
                a[y]=1;
                p1=x;
                p2=y;
            }
            else
            {
                printf("%3d",x);
                a[x]=1;
                p1=x;
                p2=x;
            }
            int t=0;
            for(i=1;i<=n;i++)
            {
                if(a[i]==1)
                    t++;
            }
            if(t==n)
                break;
            printf(",");
        }
        cout<<endl;
    }
    return 0;
}
