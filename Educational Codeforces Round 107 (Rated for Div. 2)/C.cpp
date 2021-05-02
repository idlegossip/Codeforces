#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll res=0;
    ll n,a,m;
    cin>>n>>m;
    vector<ll>v1;
    vector<ll>v;
    map<ll,ll>mp;
    ll cnt=0;
    stack<ll>sk,sk1;
    for(ll i=1; i<=n; i++)
    {
        cin>>a;
        if(!mp[a])
        {
            mp[a]=i;
            v1.push_back(a);
        }
    }

    for(ll i=v1.size()-1; i>=0; i--)
        sk.push(v1[i]);

    for(ll i=1; i<=m; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(ll i=0; i<m; i++)
    {
        a=v[i];
        ll cnt=0;
        while(1)
        {
            ll b=sk.top();
            sk.pop();
            cnt++;
            if(a==b)
            {
                if(mp[a])
                    cout<<mp[a]<<" ";
                else
                    cout<<cnt<<" ";
                mp[a]=0;
                break;
            }
            if(mp[b])
                mp[b]++;
            sk1.push(b);
        }
        while(!sk1.empty())
        {
            ll b=sk1.top();
            sk1.pop();
            sk.push(b);
        }
        sk.push(a);
    }
    cout<<endl;
}


