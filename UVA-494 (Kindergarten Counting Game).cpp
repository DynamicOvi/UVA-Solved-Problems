#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int len=s.length(),i,count=0;
        for(i=0;i<len-1;i++)
        {
            if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))&&(s[i+1]<'A'||(s[i+1]>'Z'&&s[i+1]<'a')||s[i+1]>'z'))
                count++;
        }
        if((s[len-1]>='A'&&s[len-1]<='Z')||(s[len-1]>='a'&&s[len-1]<='z'))
            count++;
        printf("%d\n",count);
    }
    return 0;
}

