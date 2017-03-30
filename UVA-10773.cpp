#include<bits/stdc++.h>
using namespace std;
int main()
{
    double d,v,u,a,vd,t1,t2;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>d>>v>>u;
        if(v>=u||v==0)
            printf("Case %d: can't determine\n",i);
        else
        {
            a=acos(v/u);
            vd=u*sin(a);
            t1=d/vd;
            t2=d/u;
            printf("Case %d: %.3lf\n",i,abs(t1-t2));
        }
    }
    return 0;
}
