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
        ll a,x,f=0;
        vector<ll>v1;
        vector<ll>v2;
        cin>>n>>x;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v2.push_back(a);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<ll>());
        for(ll i=0; i<n; i++)
        {
            if(v1[i]+v2[i]>x)
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
            if(t)
            cout<<endl;
    }
    return 0;
}
