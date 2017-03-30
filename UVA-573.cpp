#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f,x,y,z;
    int i;
    while(cin>>h>>u>>d>>f && h!=0)
    {
        x=0,i=0;
        z=u*f/100;
        while(1)
        {
            i++;
            x=x+u;
            if(x>h)
            {
                printf("success on day %d\n",i);
                break;
            }
            x=x-d;
            if(x<0)
            {
                printf("failure on day %d\n",i);
                break;
            }
            u=u-z;
            if(u<0)
                u=0;
        }
    }
    return 0;
}


