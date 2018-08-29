#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll> > matMul(vector<vector<ll> >& a, vector<vector<ll> >& b, ll m)
{
    ll i,j,k;
    vector<vector<ll> > c(a.size(), vector<ll> (b[0].size()));
    for(i=0; i<a.size(); i++)
    {
        for(k=0; k<b[0].size(); k++)
        {
            ll tmp=0;
            for(j=0; j<a[i].size(); j++)
            {
                tmp+=a[i][j]*b[j][k];
                tmp%=m;
                c[i][k]=tmp;
            }
        }
    }
    return c;
}
vector<vector<ll> > matPow(vector<vector<ll> > a, ll p, ll m)
{
    ll i,j;
    ll n=a.size();
    if(p==0)
    {
        vector<vector<ll> > singular(n,vector<ll> (n));
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(i==j)
                    singular[i][j]=1;
        return singular;
    }
    vector<vector<ll> > x(n,vector<ll> (n));
    x=matPow(a,p/2,m);
    x=matMul(x,x,m);
    if(p%2==1)
        x=matMul(x,a,m);
    return x;
}
int main()
{
    ll i,j,t,caseno=0;
    cin>>t;
    while(t--)
    {
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
        ll tmp=1;
        for(i=1;i<=m;i++)
            tmp*=10;
        vector<vector<ll>> mat(2,vector<ll> (2)),ans;
        mat[0][0]=1,mat[0][1]=1,mat[1][0]=1,mat[1][1]=0;
        ans=matPow(mat,n-1,tmp);
        vector<vector<ll>> x(2,vector<ll> (1)),fin;
        x[0][0]=b,x[1][0]=a;
        fin=matMul(ans,x,tmp);
        ll res=fin[0][0];
        cout<<res<<endl;
    }
}

