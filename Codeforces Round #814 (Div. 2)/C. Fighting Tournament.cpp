#include<bits/stdc++.h>
using namespace std;
#define ll  long long
const ll N= 1e5+7;
vector<ll>adj[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;

        vector<ll>v;
        string str;
        ll a;


        ll b;
        cin>>n>>q;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll mx = max(v[0],v[1]);
        ll st = 1;
        adj[mx].push_back(st);
        ll f=0;
        vector<ll>p(n+1,0);
        p[1]=mx;
        for(ll i=2; i<n; i++)
        {
            st++;
            if(mx<v[i])
            {
                f=1;
                adj[mx].push_back(st);
                mx =v[i];
                adj[mx].push_back(st);
            }
            p[st]=mx;

        }
        st++;
        adj[mx].push_back(st);

        while(q--)
        {
            ll k,ind ;
            cin>>ind>>k;
//            if(adj[v[ind-1]].size()!=0)
//            cout<<adj[v[ind-1]][0]<<"  fdgdfs "<<adj[v[ind-1]][1]<<endl;
            if(v[ind-1]==mx)
            {
                a = v[ind-1];
                if( adj[a][0]>k )
                {
                    cout<<0<<'\n';
                    continue;
                }

                ll cnt=0;
                if(adj[a][1]>k)
                {
                    cnt = k-adj[a][0]+1;
                }
                else
                {
                    cnt = (adj[a][1]-adj[a][0])+(k-(n-1));
                }
                cout<<cnt<<'\n';
            }
            else
            {
                a=v[ind-1];
                if(adj[a].size()==0 or adj[a][0]>k )
                {
                    cout<<0<<'\n';
                    continue;
                }
                ll cnt=0;
                if(adj[a][1]>k)
                {
                    cnt = k-adj[a][0]+1;
                }
                else
                {
                    cnt = adj[a][1]-adj[a][0];
                }
                cout<<cnt<<'\n';
            }
        }
        for(ll i=1;i<=n;i++)adj[i].clear();






    }
}


