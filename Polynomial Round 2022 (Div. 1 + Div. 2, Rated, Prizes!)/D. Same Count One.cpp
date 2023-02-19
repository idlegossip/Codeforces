#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>g[n+1];
        ll cnt = 0;
        vector<pair<ll,ll> >vp;
        ll a;
        for(int i = 0; i < n; i++)
        {
            ll tot = 0;
            for(int j = 0; j < m; j++)
            {
                cin>>a;
                g[i].push_back(a);
                if(a==1)
                    cnt++,tot++;
            }
            vp.push_back({tot,i});
        }
        if(cnt % n)
        {
            cout<<-1<<'\n';
        }
        else
        {
            ll tar = cnt / n;
            sort(vp.begin(),vp.end());
            ll r = 0;
            vector<pair<ll,pair<ll,ll> > >ans;
            ll ls = 0,rs= 0;
            ll f = 0;
            for(int i = 0; i < n; i++)
            {
                ls = 0;
                r = i + 1;
                while(r < n and vp[r].first >= tar ) r++;
                for(int j = 0 ;  j  < m; j++)
                {
                    if(g[i][j]== 1 and g[r][j]==0)
                    {
                        ans.push_back({vp[i].second,{r,j}});
                        g[i][ls] = 0;
                        g[r][ls] = 1;
                        vp[i].first--;
                        vp[r].first++;
                    }
                    if(vp[i].first <= tar or vp[r].first <= tar)
                        break;
                }
                if(vp[i].first> tar)
                {
                    f = 1;
                    break;
                }
            }
            if(f)
            {
                cout<<-1<<'\n';
            }
            else
            {
                ll sz = ans.size();
                for(int i = 0; i < sz; i++)
                {
                    cout<<ans[i].first<<' '<<ans[i].second.first<<' '<<ans[i].second.second<<'\n';
                }
            }
        }
    }
}
