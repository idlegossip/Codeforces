#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
ll dp[1010][1010][2];
ll n;
ll knapsack(ll m,ll k,ll d)
{
    if(k==1)
        return 0;
    if(m<1||m>n)
        return 0;
    if(dp[m][k][d]!=-1)
        return dp[m][k][d];
    ll cnt=0;
    if(d)
    {
        //cout<<" 1 "<<m<<" "<<k<<endl;
        cnt=(1+knapsack(m+1,k-1,0)+ knapsack(m-1,k,1))%mod;
    }
    else
    {
        //cout<<" 0 "<<m<<" "<<k<<endl;
        cnt+=(1+knapsack(m-1,k-1,1)+ knapsack(m+1,k,0))%mod;
    }
    return dp[m][k][d]=cnt;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        ll k;
        cin>>n>>k;
        if(k==1)
        {
           cout<<1<<endl;
           continue;
        }
        if(n==1)
        {
            cout<<2<<endl;
            continue;
        }
        cout<<knapsack(1,k,0)+1<<endl;

    }
}
