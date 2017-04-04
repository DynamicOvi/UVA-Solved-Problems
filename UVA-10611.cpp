#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,key;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>key;
        if(key<a[0]||key>a[n-1])
        {
            if(key<a[0])
                printf("X %d\n",a[0]);
            else
                printf("%d X\n",a[n-1]);
        }
        else
        {
            int lo,hi,mid,p1;
            lo=0;
            hi=n-1;
            while(hi-lo>1)
            {
                mid=(hi+lo)/2;
                if(key<=a[mid])
                    hi=mid;
                else
                    lo=mid;
            }
            p1=a[lo];

            int p2;
            lo=0;
            hi=n-1;
            while(hi-lo>1)
            {
                mid=(hi+lo)/2;
                if(key>=a[mid])
                    lo=mid;
                else
                    hi=mid;
            }
            p2=a[hi];

            if(p1==key)
                cout<<"X ";
            else
                cout<<p1<<" ";

            if(p2==key)
                cout<<"X"<<endl;
            else
                cout<<p2<<endl;
        }
    }
    return 0;
}
