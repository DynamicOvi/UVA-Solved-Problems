#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int len=s.length(),i;
        char st[len];
        for(i=0;i<len;i++)
        {
            if(s[i]=='1')
                st[i]='`';
            else if(s[i]=='2')
                st[i]='1';
            else if(s[i]=='3')
                st[i]='2';
            else if(s[i]=='4')
                st[i]='3';
            else if(s[i]=='5')
                st[i]='4';
            else if(s[i]=='6')
                st[i]='5';
            else if(s[i]=='7')
                st[i]='6';
            else if(s[i]=='8')
                st[i]='7';
            else if(s[i]=='9')
                st[i]='8';
            else if(s[i]=='0')
                st[i]='9';
            else if(s[i]=='-')
                st[i]='0';
            else if(s[i]=='=')
                st[i]='-';
            else if(s[i]=='W')
                st[i]='Q';
            else if(s[i]=='E')
                st[i]='W';
            else if(s[i]=='R')
                st[i]='E';
            else if(s[i]=='T')
                st[i]='R';
            else if(s[i]=='Y')
                st[i]='T';
            else if(s[i]=='U')
                st[i]='Y';
            else if(s[i]=='I')
                st[i]='U';
            else if(s[i]=='O')
                st[i]='I';
            else if(s[i]=='P')
                st[i]='O';
            else if(s[i]=='[')
                st[i]='P';
            else if(s[i]==']')
                st[i]='[';
            else if(s[i]=='\\')
                st[i]=']';
            else if(s[i]=='S')
                st[i]='A';
            else if(s[i]=='D')
                st[i]='S';
            else if(s[i]=='F')
                st[i]='D';
            else if(s[i]=='G')
                st[i]='F';
            else if(s[i]=='H')
                st[i]='G';
            else if(s[i]=='J')
                st[i]='H';
            else if(s[i]=='K')
                st[i]='J';
            else if(s[i]=='L')
                st[i]='K';
            else if(s[i]==';')
                st[i]='L';
            else if(s[i]=='\'')
                st[i]=';';
            else if(s[i]=='X')
                st[i]='Z';
            else if(s[i]=='C')
                st[i]='X';
            else if(s[i]=='V')
                st[i]='C';
            else if(s[i]=='B')
                st[i]='V';
            else if(s[i]=='N')
                st[i]='B';
            else if(s[i]=='M')
                st[i]='N';
            else if(s[i]==',')
                st[i]='M';
            else if(s[i]=='.')
                st[i]=',';
            else if(s[i]=='/')
                st[i]='.';
            else
                st[i]=s[i];
        }
        for(i=0;i<len;i++)
            cout<<st[i];
        cout<<endl;
    }
    return 0;
}


