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
        vector<ll>v;
        string str;
        ll a;
        cin>>n>>m;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        vector<ll>v1;
        for(ll i=0; i<m; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        map<ll,ll>mp;

        ll res=0;
        ll j=0;
        for(ll i=n-1; i>=0; i--)
        {
            a=v[i];
            if(j>=m||v1[a-1]<=v1[j])
            {
                res+=v1[a-1];
            }
            else
            {
                  res+=v1[j];
                  j++;
            }
        }
        cout<<res<<endl;



    }
}

