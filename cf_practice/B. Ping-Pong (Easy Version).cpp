#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,ll> >vp;
ll use[105];
ll f;
vector<ll>adj[105];
void dfs(ll point,ll tar)
{
    use[point]=1;
    for(auto a : adj[point])
    {
       // cout<<a<<"  f "<<point<<endl;
        if(a==tar)
            f=1;
        if(use[a]||f)
            continue;
        dfs(a,tar);
    }
}

int main()
{
    ll n;
    cin>>n;
    ll t,a,b;
    ll cnt=0;
    for(ll i=0; i<n; i++)
    {
        memset(use,0,sizeof(use));
        f=0;
        cin>>t>>a>>b;
        if(t==1)
        {
            cnt++;
            if(vp.size()>0)
            {
                for(ll j=0; j<vp.size(); j++)
                {
                    ll x=vp[j].first;
                    ll y=vp[j].second;
                    if((a<x&&x<b)||(a<y&&y<b))
                    {
                       // cout<<i+1<<" "<<j+1<<endl;
                      adj[j+1].push_back(cnt);
                    }

                    if((x<a&&a<y)||(x<b&&b<y))
                       {
                            adj[cnt].push_back(j+1);
                           // cout<<j+1<<" "<<i+1<<endl;

                       }
                }
            }
            vp.push_back({a,b});
        }
        else
        {
            //cout<<adj[a].size()<<" "<<adj[b].size()<<endl;
            dfs(a,b);
            if(f)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
