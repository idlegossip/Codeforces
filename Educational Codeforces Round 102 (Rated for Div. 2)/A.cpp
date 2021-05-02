#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        vector<ll>v;
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);

        }
        sort(v.begin(),v.end());
        ll f=1;
        if(v[n-1]>d)
        {
            if(v[0]+v[1]<=d)
                f=1;
            else
                f=0;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
