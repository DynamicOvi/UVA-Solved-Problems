#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,caseno=0;
    while(cin>>n && n!=0)
    {
        ll a[n],b[n],c[n];
        for(i=0;i<n;i++)
            cin>>a[i]>>b[i]>>c[i];
        ll state[n][10001];
        for(i=0;i<n;i++)
            for(j=1;j<=10000;j++)
                state[i][j]=-1;
        ll check[n][10001];
        for(i=0;i<n;i++)
            for(j=1;j<=10000;j++)
                check[i][j]=0;
        for(i=0;i<n;i++)
        {
            if(c[i]<=a[i])
            {
                for(j=1;j<=a[i]-c[i]+1;j++)
                    state[i][j]=1;
                check[i][a[i]-c[i]+1]=1;
                for(j=a[i]-c[i]+2;j<=a[i]+b[i]-c[i]+1;j++)
                    state[i][j]=0;
            }
            else
            {
                for(j=1;j<=a[i]+b[i]-c[i]+1;j++)
                    state[i][j]=0;
            }
            for(j=a[i]+b[i]-c[i]+2;j<=10000;j+=a[i]+b[i])
            {
                ll ii;
                for(ii=j;ii<=j+a[i]-1;ii++)
                    state[i][ii]=1;
                check[i][j+a[i]-1]=1;
                for(ii=j+a[i];ii<=j+a[i]+b[i]-1;ii++)
                    state[i][ii]=0;
            }
        }
        cout<<"Case "<<++caseno<<": ";
        ll ff=0;
        for(i=1;i<=10000;i++)
        {
            ll w=0,s=0,f=0,tw=0;
            for(j=0;j<n;j++)
            {
                if(state[j][i]==1)
                    tw++;
                if(check[j][i]==1)
                {
                    f=1;
                }
            }
            if(tw==n)
            {
                ff=1;
                cout<<i<<endl;
                break;
            }
            else if(f==1)
            {
                for(j=0;j<n;j++)
                {
                    if(state[j][i]==0)
                        s++;
                    else
                        w++;
                }
                if(w>=s)
                {
                    for(j=0;j<n;j++)
                    {
                        if(check[j][i]==1)
                        {
                            for(ll ii=i+1;ii<=10000;ii++)
                            {
                                state[j][ii]=1;
                            }
                        }
                    }
                }
            }
        }
        if(ff==0)
            cout<<-1<<endl;
    }
}

