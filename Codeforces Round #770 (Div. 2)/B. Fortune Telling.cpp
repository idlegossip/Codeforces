#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll n,y;
ll inf=1e9;
vector<ll>v;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>n>>x>>y;
        v.clear();
        ll a;
        ll sum=x;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            sum^=a;
        }
          if(sum%2==y%2)
            cout<<"Alice"<<endl;
          else
            cout<<"Bob"<<endl;


    }
}


