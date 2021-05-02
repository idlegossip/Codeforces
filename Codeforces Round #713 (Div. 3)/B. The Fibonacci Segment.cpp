#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    ll a;
    vector<ll>v;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll mx=2;
    if(n<=2)
    {
        if(n==1)
        cout<<1<<endl;
        else
            cout<<2<<endl;
        return 0;
    }
    ll c=2;
    for(ll i=0;i<n-2;i++)
    {
      if(v[i]+v[i+1]==v[i+2])
        c++;
      else
        c=2;
      mx=max(mx,c);
    }
    cout<<mx<<endl;
}
