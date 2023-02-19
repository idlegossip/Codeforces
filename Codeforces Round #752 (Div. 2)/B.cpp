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
        vector<int>v;
        cin>>n;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }

        ll f=1;
        ll f1=0;
        for(ll i=1; i<n; i++)
        {
            if(v[i-1]>=v[i])
            {
                f=0;
            }
        }
        if(n%2==0||!f)
        {
            cout<<"YES"<<endl;
            continue;

        }
        cout<<"NO"<<endl;
    }
}
