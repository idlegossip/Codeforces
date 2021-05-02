#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        ll n,m;
        ll x,y,z,i,j,k=1;
        cin>>str>>x;
        n=str.size();
        string restr;
        for(i=0; i<n; i++)
        {
            restr+='1';
        }
        for(i=0; i<n; i++)
        {
            y=i+x;
            z=i-x;
            if(str[i]=='0')
            {
                if(z>=0)
                    restr[z]='0';
                if(y<n)
                    restr[y]='0';
            }
        }
        for(i=0; i<n; i++)
        {
            ll f=0;
            y=i+x;
            z=i-x;
            if(str[i]=='1')
            {
                if(z>=0&&restr[z]=='1')
                    f=1;
                if(y<n&&restr[y]=='1')
                    f=1;
                if(!f)
                {
                    k=0;
                    break;
                }
            }
        }
        if(k)
            cout<<restr<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
