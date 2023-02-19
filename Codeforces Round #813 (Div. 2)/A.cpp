#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll k;
        ll cnt=0;
        ll a;
        cin>>n>>k;
        vector<ll>v;

        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
         for(ll i=0;i<k;i++)
        {
           if(k<v[i])
            cnt++;
        }
        cout<<cnt<<endl;

    }
}
