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
        cin>>n;
        vector<ll>v;
        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
         sort(v.begin(),v.end());
        if(n==1)
        {
            if(a>1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            if(v[n-1]>v[n-2]+1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

        }

    }
}
