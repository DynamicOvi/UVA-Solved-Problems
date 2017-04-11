#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int f=0;
    while(getline(cin,s))
    {
        int i,len;
        len=s.length();
        for(i=0;i<len;i++)
        {
            if(s[i]==34)
            {
                f++;
                if(f%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
