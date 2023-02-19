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
        ll s=v[0];
        ll f=1;
        for(ll i=1;i<n;i++)
        {
            if(s<=0&&v[i]!=0)
                f=0;
            s+=v[i];

        }
        if(f&&s==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
}

