#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
        ll n,m;
        cin>>n>>m;
        ll a,s=0;
        vector<ll>v,v1(n+1);
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        v1[0]=0;
        for(ll i=0;i<n;i++)
        {
            v1[i+1]=v1[i]+v[i];
            //cout<<v1[i+1]<<endl;
        }
        ll x,y;
        while(m--)
        {
            cin>>x>>y;
          //a=(v1[n]-v1[n-x]);
            cout<<(v1[n-x+y]-v1[n-x])<<endl;


        }

}

