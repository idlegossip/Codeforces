#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[110][5];
vector<ll>v;
ll n;
ll knap(ll ind,ll val)
{
    if(ind>=n)
        return 0;
    if(dp[ind][val]!=-1)
        return dp[ind][val];
    ll f=1e9,f1=1e9,f2=1e9,f3=1e9;
    if(v[ind]==0)
        f=1+knap(ind+1,0);

    if(v[ind]==1)
    {
        if(v[ind]!=val)
            f1=knap(ind+1,1);
        f1=min(f1,1+knap(ind+1,0));
    }


    if(v[ind]==2)
    {
        if(v[ind]!=val)
            f2=knap(ind+1,2);
        f2=min(f2,1+knap(ind+1,0));
    }
    if(v[ind]==3)
    {
        if(val==2)
            f3=min(f3,knap(ind+1,1));
        if(val==1)
            f3=min(f3,knap(ind+1,2));
    }
    return dp[ind][val]=min(f1,min(f2,min(f,f3)));
}
int main()
{
    ll a;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll f1=1e9,f2=1e9,f3=1e9,f=1e9;
    ll ind=0;
    if(v[ind]==0)
        f=1+knap(ind+1,0);
    if(v[ind]==1)
    {
        f1=knap(ind+1,1);
        f1=min(f1,1+knap(ind+1,0));
    }
    if(v[ind]==2)
    {
        f2=knap(ind+1,2);
        f2=min(f2,1+knap(ind+1,0));
    }
    if(v[ind]==3)
    {
        f3=min(f3,knap(ind+1,1));
        f3=min(f3,knap(ind+1,2));
    }
    cout<<min(f1,min(f2,min(f3,f)))<<endl;
}
