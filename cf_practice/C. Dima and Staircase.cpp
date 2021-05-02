#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n;
    ll ar[n+10];
    ll ar1[n+10];
    ll mx=0;
    for(ll i=0; i<n; i++)
    {
        cin>>ar[i];
        mx=max(ar[i],mx);
        ar1[i]=mx;
    }
    cin>>m;
    ll a,b;
    for(ll i=0; i<m; i++)
    {
        cin>>a>>b;
        a--;
        mx=max(ar1[0],ar1[a]);
        cout<<mx<<endl;
        ar1[0]=mx+b;
    }


}
