#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<pair<ll,ll>,ll>mp;
ll mod=1e9+7;
ll n;
int main()
{
    cin>>n;
    ll res=1;
    ll activ=0;
    ll des;
    for(ll i=0;i<n;i++)
    {
        des=(activ*3LL)%mod;
        activ=(activ*2LL+res)%mod;
        res=des;
    }
    cout<<res<<endl;
}
