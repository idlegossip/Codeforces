#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector<ll>v1;
vector<ll>value,coin;
ll dp[1005][13000][2];
ll dp1[3000];
ll inf=-1e18;
ll knap(ll ind,ll f,ll k)
{
    if(ind>n||k<0)
        return inf;
    if(ind==n)
    {
        return 0;
    }
    if(dp[ind][k][f]!=0)
        return dp[ind][k][f];

    dp[ind][k][f]=max(coin[ind]+knap(ind+1,1,k-value[ind]),knap(ind+1,0,k));
    return  dp[ind][k][f];

}

void dis(ll N)
{
    for(ll i=1;i<=N;i++)
    {
        for(ll j=1;j<=i;j++)
        {
            ll k=i+(i/j);
            dp1[k]=min(dp1[k],dp1[i]+1);
        }
    }

}


int main()
{
    ll t;
    cin>>t;
       for(ll j=0;j<=1004;j++)
        dp1[j]=1001;

    dp1[1]=0;
    dis(1010);
//    for(ll i=1; i<=1000; i++)
//        cout<<dp1[i]<<" ";

    while(t--)
    {
        ll a,k;
        cin>>n>>k;
       memset(dp,0,sizeof(dp));
        v1.clear();
        coin.clear();
        value.clear();
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            coin.push_back(a);
        }
        ll sum=1;
        ll j=0,i=0;
        for(ll i=0; i<n; i++)
        {
            //cout<<mp[v1[i]]<<" ";
            value.push_back(dp1[v1[i]]);
        }
        k=min(k,13*n);
        cout<<knap(0,0,k)<<endl;



    }
}
