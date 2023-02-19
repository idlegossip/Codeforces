#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans=0;

void bfs(vector<ll>&v)
{
    if(v.empty())
        return;
    ll last=0;
    ll n=v.size();
    for(ll i=0; i<n; i++)
    {
        if(v[0]==v[i])
            last=i;
        else
            break;

    }
    v[last]--;
    for(ll i=0; i<n; i++)
        v[i]--;
    ans++;
    while(!v.empty()&&v.back()<=0)
        v.pop_back();
    bfs(v);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a;
        vector<ll>vp(n+1);
        for(ll i=1; i<n; i++)
        {
            cin>>a;
            vp[a--]++;
        }
        vp.push_back(1);
        sort(vp.rbegin(),vp.rend());

        while(!vp.empty()&&vp.back()<=0)
            vp.pop_back();

        ll mx=0;
        n=vp.size();
        for(ll i=0; i<n; i++ )
        {
            a=vp[i];
            vp[i]=vp[i]-(n-i);
        }
        ans=n;

        sort(vp.rbegin(),vp.rend());

        while(!vp.empty()&&vp.back()<=0)
            vp.pop_back();

        bfs(vp);
        cout<<ans<<endl;



    }
}

