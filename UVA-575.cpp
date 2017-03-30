#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s && s!="0")
    {
        int l=s.length(),i,count=0;
        for(i=l-1;i>=0;i--)
        {
            count+=(s[i]-'0')*(pow(2,l-i)-1);
        }
        cout<<count<<endl;
    }
    return 0;
}
