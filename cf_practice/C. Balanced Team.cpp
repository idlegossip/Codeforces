#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    vector<ll>v;
    ll a;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll cnt=0,j=0,res=0;
    for(ll i=0; i<n; i++)
    {
          while(v[j]-v[i]<=5&&j<n)
          {

                j++;
          }
          cnt=j-i;

          res=max(res,cnt);
    }

    cout<<res<<endl;
    return 0;
}
