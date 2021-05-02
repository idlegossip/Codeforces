#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll a;
        vector<ll>v,v1;
        cin>>n;
        string str;
        cin>>str;
        ll m=0,t=0;
        ll f=0;
        for(ll i=0; i<n; i++)
        {

            if(str[i]=='M')
            {
                m++;
            }
            else
            {
                t++;
            }
            if(t<m)
                f=1;
        }
        t=0,m=0;
        for(ll i=n-1; i>=0; i--)
        {

            if(str[i]=='M')
            {
                m++;
            }
            else
            {
                t++;
            }
            if(t<m)
                f=1;
        }
        if(f==0&&2*m==t)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}

