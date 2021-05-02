#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll a,ll b)
{
    return (b == 0) ? a:GCD(b,a%b);
}
ll LCM(ll a,ll b)
{
    return a*b/GCD(a,b);
}

int main()
{
        ll n,m;
        cin>>n>>m;
        vector<ll>v;
        vector<ll>res;
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
       sort(v.begin(),v.end());
     //   reverse(v.begin(),v.end());
        ll gcd=0;
        for(ll i=1; i<n; i++)
        {
              gcd=GCD(gcd,(v[i]-v[0]));
        }
         for(ll i=0; i<m; i++)
        {
            cin>>a;
            ll b=GCD(gcd,v[0]+a);
            res.push_back(b);
        }
         for(ll i=0; i<m; i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;

    return 0;

}
