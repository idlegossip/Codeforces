#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        map<ll,ll>mp;
        ll ind=0;
        ll n;
        vector<ll>v;
        cin>>n;
        string str[n+10];
        for(ll i=0;i<n;i++)
            cin>>str[i];
        ll x1,y1,x2,y2;
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(!f&&str[i][j]=='*')
                {
                    x1=i;
                    y1=j;
                    f=1;
                }
                else if(str[i][j]=='*')
                {
                    x2=i;
                    y2=j;
                }
            }
        }
        if(x1==x2)
        {
            if(x1+1<n&&x2+1<n)
            {
                str[x1+1][y1]='*';
                str[x2+1][y2]='*';
            }
            else if(x1-1>=0&&x2-1>=0)
            {
               str[x1-1][y1]='*';
                str[x2-1][y2]='*';
            }
        }
        else if(y1==y2)
        {
           if(y1+1<n&&y2+1<n)
            {
                str[x1][y1+1]='*';
                str[x2][y2+1]='*';
            }
            else
            {
               str[x1][y1-1]='*';
                str[x2][y2-1]='*';
            }
        }
        else
        {
           str[x1][y2]='*';
                str[x2][y1]='*';
        }
        for(ll i=0;i<n;i++)
            cout<<str[i]<<endl;
    }
}
