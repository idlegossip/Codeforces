#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll a;
        vector<ll>v,v1;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            if(a%2)
                v.push_back(a);
            else
                v1.push_back(a);
        }
         for(ll i=0;i<v.size();i++)
            cout<<v[i]<<" ";
          for(ll i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
            cout<<endl;

    }
}
