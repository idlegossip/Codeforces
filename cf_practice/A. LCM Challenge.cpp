#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll a,ll b){
    return (b == 0) ? a:GCD(b,a%b);
}
ll LCM(ll a,ll b){
    return a*b/GCD(a,b);
}
int main()
{
    ll n;
    cin>>n;
    if(n<3)
    {
        cout<<n<<endl;
        return 0;
    }
    if(n==3)
    {
        cout<<2*n<<endl;
        return 0;
    }
    vector<ll>v;
     ll l=min(n,50LL);
     for(ll i=0;i<l;i++)
          v.push_back(n-i);

      n=v.size();
        ll g=0;
        for(ll i=0;i<n;i++)
        {
           for(ll j=0;j<n;j++)
           {
               for(ll k=0;k<n;k++)
               {
                  ll a=LCM(LCM(v[i],v[j]),v[k]);
                  g=max(g,a);
               }
           }
        }
    cout<<g<<endl;
}
