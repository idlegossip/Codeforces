#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    vector<ll>v;
    bitset<200005>bt;
    bt[0]=1;
    ll a;
    ll n;
    ll sum=0;
    bt[0]=1;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        bt=bt|(bt<<a);
        v.push_back(a);
        sum+=a;
    }
    if(sum%2==1||bt[sum/2]==0)
        cout<<0<<endl;
    else
    {
        pair<ll,ll>mn(30,0);
        for(ll i=0;i<n;i++)
        {
            mn=min(mn,{__builtin_ctz(v[i]),i+1});

        }
        cout<<1<<endl;
        cout<<mn.second<<endl;
    }

}
