#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll node,edge;
    while(cin>>node && node!=0)
    {
        ll edge;
        cin>>edge;
        vector<vector<ll> > graph(node);
        ll mat[node][node];
        for(i=0;i<node;i++)
            for(j=0;j<node;j++)
                mat[i][j]=0;
        for(i=1;i<=edge;i++)
        {
            ll x,y;
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
            mat[x][y]=1;
            mat[y][x]=1;
        }
        vector<ll> mark(node),level(node),parent(node);
        queue<ll> q;
        ll source=0;
        q.push(source);
        level[source]=0;
        mark[source]=1;
        parent[source]=-1;
        while(q.empty()==0)
        {
            ll p=q.front();
            for(i=0;i<graph[p].size();i++)
            {
                ll x=graph[p][i];
                if(mark[x]==0)
                {
                    q.push(x);
                    mark[x]=1;
                    level[x]=level[p]+1;
                    parent[x]=p;
                }
            }
            q.pop();
        }
        vector<ll> v1,v2;
        for(i=0;i<node;i++)
        {
            if(level[i]%2==0)
                v1.push_back(i);
            else
                v2.push_back(i);
        }
        ll f=1;
        for(i=0;i<v1.size();i++)
            for(j=0;j<v1.size();j++)
                if(mat[v1[i]][v1[j]]==1)
                    f=0;
        for(i=0;i<v2.size();i++)
            for(j=0;j<v2.size();j++)
                if(mat[v2[i]][v2[j]]==1)
                    f=0;
        if(f==0)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
    }
}
