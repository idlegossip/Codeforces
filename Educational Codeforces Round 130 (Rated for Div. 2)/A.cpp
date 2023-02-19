#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a,s=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            s+=a;
        }
        if(s<=m)
            cout<<0<<endl;
        else
            cout<<s-m<<endl;
    }
}
