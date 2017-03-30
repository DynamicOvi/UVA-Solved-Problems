#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    while(cin>>q && q!=0)
    {
        int dx,dy,i,x,y;
        cin>>dx>>dy;
        for(i=1;i<=q;i++)
        {
            cin>>x>>y;
            if(x==dx||y==dy)
                cout<<"divisa"<<endl;
            else if(x>dx && y>dy)
                cout<<"NE"<<endl;
            else if(x<dx && y>dy)
                cout<<"NO"<<endl;
            else if(x>dx && y<dy)
                cout<<"SE"<<endl;
            else if(x<dx && y<dy)
                cout<<"SO"<<endl;
        }
    }
    return 0;
}
