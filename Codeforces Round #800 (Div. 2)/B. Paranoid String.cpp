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
        ll a,b;
        string str;
        cin>>n>>str;
        ll ans=0;
        ll cnt=0;
        ll f=0;

        for(ll i=n-1;i>=1;i--)
        {
            if(str[i]=='0'&&str[i-1]=='1')
            {
               ans+=i;
            }
            else if(str[i]=='1'&&str[i-1]=='0')
            {
                ans+=i;
            }

        }
        cout<<n+ans<<endl;



    }
}

