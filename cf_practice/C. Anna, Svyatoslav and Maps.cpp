#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n;
    string str[n+10];
    for(ll i=0; i<n; i++)
    {
        cin>>str[i];
    }
    ll dis[n+10][n+10];
    for(ll i=0; i<n; i++)for(ll j=0; j<n; j++)dis[i][j]=1e9;
    for(ll i=0; i<n; i++)
    {
        dis[i][i]=0;
        for(ll j=0; j<n; j++)
        {
            if(str[i][j]=='1')
                dis[i][j]=1;

        }
    }
    for(ll k=0; k<n; k++)
        for(ll i=0; i<n; i++)
            for(ll j=0; j<n; j++)
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);

    cin>>m;

    ll ar[m+10];
    for(ll i=0; i<m; i++)
        cin>>ar[i];
    vector<ll>ans;
    ans.push_back(ar[0]);
    for(ll i=0; i+1<m;)
    {
        ll res=i+1;
        for(ll j=i+1; j<min(m,(i+1+n)); j++)
        {
            if(dis[ar[i]-1][ar[j]-1]==j-i)
                res=j;
        }
        i=res;
        ans.push_back(ar[res]);
    }
    cout<<ans.size()<<endl;
    for(ll i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}
