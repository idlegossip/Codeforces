#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000010][25];
ll Log[1000001];
void build(long long n)
{
    for(ll j=1; j<25; j++)
    {
        for(ll i=0; i+(1<<j)<=n; i++)
        {
            dp[i][j]=min(dp[i][j-1],dp[i+(1<<j)/2][j-1]);
        }
    }
}
ll chec(long long l, long long r)
{
    ll a=Log[r-l+1];
    return min(dp[l][a],dp[r-(1<<a)+1][a]);
}

int  main()
{
    ll n,m;
    cin>>n>>m;
    Log[1]=0;
    for(ll i=2; i<=n; i++)
        Log[i]=Log[(i/2)]+1;

    for(ll i=0; i<n; i++)
        cin>>dp[i][0];


    build(n);

    ll a=n/m;
    ll b=n%m;
    ll res=LONG_LONG_MIN,mn=LONG_LONG_MAX;

    for(ll i=0; i<n; i++)
    {
        if(i+a<=n)
        {
            mn=chec(i,i+a-1);
            res=max(res,mn);
        }
        if(i+a+b<=n)
        {
            mn=chec(i,i+a+b-1);
            res=max(res,mn);
        }
    }
     for(ll i=0,j=n-1; i<m-1; i++,j--)
     {
            res=max(res,dp[i][0]);
             res=max(res,dp[j][0]);
     }
    cout<<res<<endl;

}
