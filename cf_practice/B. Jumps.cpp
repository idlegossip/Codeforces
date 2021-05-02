#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    map<ll,ll>mp;
    ll sum=0;
    ll c=0;

    for(ll i=1; i<=1e6; i++)
    {
        if(sum<i)
        {
            c++;
            sum+=c;
        }
        if(sum==i)
            mp[i]=c;
        else
        {
            if(sum-c-1==i)
                mp[i]=c+1;
            else
                mp[i]=c;
        }
    }
    while(t--)
    {
        ll x;
        ll l=1,r=1e4;
        cin>>x;
        cout<<mp[x]<<endl;
    }
}
