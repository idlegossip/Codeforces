#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector<ll>res;
map<pair<ll,ll>,ll>mp;
vector<ll>v;
int main()
{
    ll a,m;
    cin>>n;
    ll mal=1;
    for(ll i=1; i<=n; i++)
    {
        if(__gcd(n,i)==1LL)
        {
            v.push_back(i);
            mal*=i;
            mal%=n;

        }
    }
    if(mal==1)
    {
        cout<<v.size()<<endl;
        for(ll i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
        return 0;
    }
    cout<<v.size()-1<<endl;
    for(ll i=0; i<v.size(); i++)
        if(v[i]==mal)
            continue;
        else
            cout<<v[i]<<" ";
    cout<<endl;
}
