#include<bits/stdc++.h>
using namespace std;
vector<long long >r;
vector<long long >b;
vector<long long >g;

long long dp[205][205][205];
long long mx=0;
long long n,m,l;
long long color (long i,long j,long k)
{
    if((i>=n&&j>=m)||(i>=n&&k>=l)||(j>=m&&k>=l))
        return 0;
    if(dp[i][j][k]!=-1)
        return dp[i][j][k];
    long long mx=0;
    if(n>i&&m>j)
    {
        mx=max(mx,(r[i]*b[j])+color(i+1,j+1,k));
        //cout<<mx<<endl;
        if(l>k)
        {
            mx=max(mx,(b[j]*g[k])+color(i,j+1,k+1));
            // cout<<mx<<endl;
            mx=max(mx,(r[i]*g[k])+color(i+1,j,k+1));
            //  cout<<mx<<endl;
        }
    }
    else if(n>i&&l>k)
        mx=max(mx,(r[i]*g[k])+color(i+1,j,k+1));
    else if(m>j&&l>k)
        mx=max(mx,(b[j]*g[k])+color(i,j+1,k+1));
    dp[i][j][k]=mx;
    return dp[i][j][k];
}
int main()
{

    memset(dp,-1,sizeof(dp));
    cin>>n>>m>>l;
    long long i,j,k;
    long long  a;
    for(i=1; i<=n; i++)
    {
        cin>>a ;
        r.push_back(a);
    }
    for(i=1; i<=m; i++)
    {
        cin>>a;
        b.push_back(a);
    }
    for(i=1; i<=l; i++)
    {
        cin>>a ;
        g.push_back(a);
    }
    sort(r.begin(),r.end(),greater<long long >() );
    sort(b.begin(),b.end(),greater<long long >() );
    sort(g.begin(),g.end(),greater<long long >());
    cout<<color(0,0,0)<<endl;
    return 0;
}

