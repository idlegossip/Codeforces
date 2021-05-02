#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,n,m;
        cin>>n>>m;
        ll mul=1;
        for(ll i=1;i<=m;i++)
        {
            mul*=n;
            mul%=mod;
        }
         cout<<mul<<endl;
    }
}

