
/*   Bismillahir Rahmanir Rahim   */

#include<bits/stdc++.h>
using namespace std;
typedef   long long  int   ll;
typedef      long double   ld;
typedef     vector<ll>      vll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using    namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define     fi              first
#define     se              second
#define     pb              push_back
#define Fin          freopen("input.txt","r",stdin)
#define Fout         freopen("output.txt","w",stdout)
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     ss              ' '
#define     pii            pair<ll,ll>
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)


vector<ll>v[100005];
ll visit[100005];

ll pa[100005];
map<pair<ll,ll>,ll>mp;
void bfs(ll p)
{
    queue<ll>q;
    q.push(p);
    visit[p]=1;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        for(ll i=0; i<v[p].size(); i++)
        {
            ll val=v[p][i];
            if(visit[val])
                continue;
            visit[val]=1;
            q.push(val);
        }
        if(v[p].size()==1)
            continue;
        for(ll i=0; i<v[p].size(); i++)
        {
            ll a=v[p][i];
            if(mp[{p,a}]==0)
                continue;

            if(mp[{p,a}]==2)
            {
                ll b;
                if(i==1)
                {
                    b=v[p][0];
                    mp[{b,p}]=3;
                     mp[{p,b}]=3;
                }
                else
                {
                   b=v[p][1];
                    mp[{b,p}]=3;
                     mp[{p,b}]=3;
                }
            }
            else
            {
                ll b;
                if(i==1)
                {
                    b=v[p][0];
                    mp[{b,p}]=2;
                     mp[{p,b}]=2;
                }
                else
                {
                   b=v[p][1];
                    mp[{b,p}]=2;
                     mp[{p,b}]=2;
                }
            }

        }
    }
}


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {


        ll n;
        ll a,b;
        ll mx=0;
        cin>>n;
        vector<pair<ll,ll> >vp;
        for(ll i=0; i<n-1; i++)
        {
            cin>>a>>b;
            vp.push_back({a,b});
            v[a].pb(b);
            v[b].pb(a);
            if(v[a].size()>2||v[b].size()>2)
                mx=1;
        }
        if(mx)
        {
            cout<<-1<<endl;
            for(ll i=1; i<=n; i++)
                v[i].clear();
            continue;
        }
        for(ll i=1; i<=n; i++)
        {
            if(visit[i])
                continue;
            mp[ {i,v[i][0]}]=2;
            mp[ {v[i][0],i}]=2;
            bfs(i);
        }
        for(auto x : vp)
        {
            cout<<mp[x]<<" ";

        }
        cout<<endl;
        for(ll i=0; i<=n; i++)
        {
            pa[i]=0;
            visit[i]=0;
            v[i].clear();
        }
        mp.clear();


    }

}


