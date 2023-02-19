#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N  = 2e5+7;
ll spf[N];
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        ll n;
        cin>>n;
         a  = 2;
         map<ll,ll>mp;
         cout<<2<<endl;
        for(ll i=1;i<=n;i++)
        {
            if(mp[i])
                continue;
             for(ll j=i;j<=n;j*=2)
             {
                 cout<<j<<" ";
                 mp[j]=1;
             }


        }
        cout<<endl;

    }
}

