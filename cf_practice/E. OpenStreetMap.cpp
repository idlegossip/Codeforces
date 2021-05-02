#include<bits/stdc++.h>
using namespace std;
#define ll long long
deque<pair<ll,ll> >dq;
void add(ll val,ll ind)
{
    while(!dq.empty()&&dq.back().first>=val)
        dq.pop_back();
    dq.push_back({val,ind});
}
void del(ll ind)
{
    while(!dq.empty()&&dq.front().second<=ind)
        dq.pop_front();
}
int main()
{
    ll n,m,a,b;

    cin>>n>>m>>a>>b;
    ll g[n*m+10];
    ll x,y,z ;
    cin>>g[0]>>x>>y>>z;
    ll mat[n+10][m+10];

    for(ll i=1; i<=(n*m)+5; i++)
    {
        g[i]=(((g[i-1]*x)+y)%z);
    }

    ll matr[n+10][m-b+10];
    for(ll i=1; i<=n; i++)
        for(ll j=1; j<=m; j++)
            mat[i][j]=g[(i-1)*m+j-1];
    ll sum=0;
    for(ll j=1; j<=n; j++)
    {
        for(ll i=1; i<=m; i++)
        {
            add(mat[j][i],i);
            if(i-b>=0)
            {
                del(i-b);
                ll x=dq.front().first;
                // cout<<x<<" ";
                matr[j][i-b+1]=x;
            }
        }
        //cout<<endl;
        while(!dq.empty())
            dq.pop_back();
    }
    for(ll j=1; j<=m-b+1; j++)
    {
        for(ll i=1; i<=n; i++)
        {
            add(matr[i][j],i);
            if(i-a>=0)
            {
                del(i-a);
                ll x=dq.front().first;
                // cout<<x<<"  ";
                sum+=x;
            }
        }
       // cout<<endl;
        while(!dq.empty())
            dq.pop_back();
    }


    cout<<sum<<endl;

}
