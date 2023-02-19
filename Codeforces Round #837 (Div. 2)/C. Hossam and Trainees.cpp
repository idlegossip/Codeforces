#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+7;
vector<ll>pr;
bool vis[N+2];
void sive()
{
    for(int i = 2; i * i <= N ; i++)
    {
        if(vis[i])
            continue;
        for(int j = i * i ; j <= N; j+= i)
        {
            vis[j] = 1;
        }
    }
    pr.push_back(2);
    for(int i = 3; i <= N; i+= 2)
    {
        if(!vis[i]) pr.push_back(i);
    }

}
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll t;
    cin>>t;
    sive();
    while(t--)
    {
        ll a,b;
        ll n,m;
        cin>>n;
        vector<ll>v;
        map<ll,ll>mp;
        ll sz = pr.size();
       // cout<<sz<<'\n';
        ll f = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            ll tmp = a;
            for(int j = 0; j <sz and (pr[j] * pr[j]) <= a; j++)
            {
                ll x = 0;

                while(!(a % pr[j]))
                {
                   // cout<< v[j]<<'\n';
                    a /= pr[j];
                    x = 1;
                }
                if(x)
                {
                    if(mp[pr[j]])
                        f =1;
                    mp[pr[j]]++;
                }
            }
           // cout<<a<<'\n'
            if(a > 1)
            {
                if(mp[a])
                    f =1;
                mp[a]++;
            }
            //cout<<a<<'\n';
        }
        if(f)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}

