#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    vector<ll>v;
    ll a,b;
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll cnt=0;
    ll d;

    d=v[n-1]-v[0];
    if(d==0)
    {
        cout<<d<<" "<<(n*(n-1))/2<<endl;
        return 0;
    }
    ll i,j=n-1,cnt1=0;
    for(i=0; i<n; i++)
    {
        if(v[n-1]==v[i])
            cnt++;
        if(v[0]==v[i])
            cnt1++;
    }
    ll ans=cnt1*cnt;
    cout<<d<<" "<<ans<<endl;

    return 0;
}
