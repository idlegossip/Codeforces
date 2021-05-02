#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v,v1,v2;
    ll a;
    ll j=(n/2);
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);

    }
    sort(v.rbegin(),v.rend());
    ll cnt=0;
    for(ll i=0; i<n/2; i++)
    {
        if(v[i]<=0)
            continue;
        while(j<n&&v[i]<2LL*v[j])
            j++;
        if(j<n&&v[i]>=2LL*v[j])
            v[j]=-1,j++,v[i]=0;
    }
    for(ll i=0; i<n; i++)
    {
        if(v[i]>=0)
            cnt++;
    }

    cout<<cnt<<endl;

}
