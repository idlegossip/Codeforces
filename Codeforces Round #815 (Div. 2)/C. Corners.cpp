#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll  t;
    cin>>t;
    while(t--)
    {
        ll n,m;

        cin>>n>>m;
        string str[n+1];
        for(ll i=0; i<n; i++)cin>>str[i];
        ll z=0;
        ll f1=0;
        ll f2=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                if(str[i][j]=='0')
                {
                    z++;
                    f1=1;
                    if(i+1<n and str[i+1][j]=='0')
                        f2=1;
                    if(j+1<m and str[i][j+1]=='0')
                        f2=1;
                    if(i-1>=0 and str[i-1][j]=='0')
                        f2=1;
                    if(j-1>=0 and str[i][j-1]=='0')
                        f2=1;
                }
                else
                {
                    ll cnt=0;
                    if(i+1<n and str[i+1][j]=='0')
                    {
                        if(j+1<m and str[i][j+1]=='0')
                            f2=1;
                        if(j-1>=0 and str[i][j-1]=='0')
                            f2=1;
                    }
                    if(i-1>=0 and str[i-1][j]=='0')
                    {
                        if(j+1<m and str[i][j+1]=='0')
                            f2=1;
                        if(j-1>=0 and str[i][j-1]=='0')
                            f2=1;

                    }
                    if(j+1<m and str[i][j+1]=='0')
                    {
                        if(i-1>=0 and str[i-1][j]=='0') f2=1;
                        if(i+1<n and str[i+1][j]=='0') f2=1;
                    }
                    if(j-1>=0 and str[i][j-1]=='0')
                    {
                        if(i-1>=0 and str[i-1][j]=='0') f2=1;
                        if(i+1<n and str[i+1][j]=='0') f2=1;
                    }
                }
            }
        }
        n*=m;
        ll on=n-z;
        if(on==n)
        {
            cout<<n-2<<endl;
        }
        else if(z==n)
        {
            cout<<0<<'\n';
        }
        else if(f2)
        {
            cout<<on<<endl;
        }
        else if(f1)
        {
            cout<<on-1<<endl;
        }
    }
}


