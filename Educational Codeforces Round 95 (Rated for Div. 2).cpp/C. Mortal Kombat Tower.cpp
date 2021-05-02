#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[2][200010];
vector<ll>v;
ll n;
ll recur(ll m,ll i)
{
    if(i>=n)
        return 0;
    if(dp[m][i]!=- 1)
        return dp[m][i];
    ll mn=LONG_LONG_MAX;
    if(m==0)
    {
        mn=v[i]+recur(1,i+1);
        if(i+1<n)
            mn=min(mn,v[i]+v[i+1]+recur(1,i+2))   ;
    }
    else
    {
        mn=recur(0,i+1);
        if(i+1<n)
            mn=min(mn,recur(0,i+2))   ;
    }
    dp[m][i]=mn;
    return mn;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        long long x,y,m;
        long long res=0;
        cin>>n;
        for(ll i=0; i<2; i++)
            for(ll j=0; j<=n; j++)
                dp[i][j]=-1;
        v.clear();
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        cout<<recur(0,0)<<endl;

    }

    return 0;
}



