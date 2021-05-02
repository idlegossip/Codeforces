
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b;
    ll n,q;
    cin>>n>>q;
    vector<ll>v,v1;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    v1=v;
    sort(v.rbegin(),v.rend());
    ll cur=0;
    for(ll i=0; i<n; i++)
    {
        if(v[i])
            cur=i;
    }
    for(ll i=0; i<q; i++)
    {
        cin>>a>>b;
        if(a==1)
        {
            if(v1[b-1])
            {
                  v1[b-1]=0;
                v[cur]=0;
                cur--;
            }
            else
            {
                   v1[b-1]=1;
                cur++;
                v[cur]=1;
            }
        }
        else
            cout<<v[b-1]<<endl;
    }

}

