#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f=0;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll res=0;
        ll x,y;
        ll n,m;
        cin>>n>>m;
        bool visit[n+10];
        ll mp[n+10];
        ll mp1[n+10];
        memset(visit,false,sizeof(visit));
        memset(mp,0,sizeof(mp));
         memset(mp1,0,sizeof(mp1));
        for(ll i=0; i<m; i++)
        {
            cin>>x>>y;
            mp[x]=y;
            mp1[y]=x;
        }
        for(ll i=1; i<=n; i++)
        {
            f=0;
            if(mp[i]==0||visit[i])
                continue;
            if(mp[i]==i)
            {
                m--;
                continue;
            }
            ll u=i;
            visit[0]=0;
            while(visit[u]==0&&u)
            {
                visit[u]=true;
                u=mp[u];
                if(visit[u])
                    f=1;
            }
            if(!u)
            {
                u=mp1[i];
                while(visit[u]==0&&u)
                {
                    visit[u]=true;
                    u=mp1[u];
                }
            }
            if(f)
                res++;
        }
        cout<<m+res<<endl;
    }
    return 0;
}
