#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{


    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
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
            if(2*v[0]+1<=m)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
                continue;
        }
        if(n>m)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll sum=max(v[0],v[n-1]);
        for(ll i=0;i<n-1;i++)
        {
           sum+=(max(v[i],v[i+1]));
        }
        if(sum+n<=m)
        {
           cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}


