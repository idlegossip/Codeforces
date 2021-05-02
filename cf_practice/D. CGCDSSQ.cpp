#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>res;
ll dp[1000010][26];
ll Log[1000010];
vector<ll>v;
ll GCD(ll a,ll b)
{
    return (b == 0) ? a:GCD(b,a%b);
}
void build(ll n)
{
    for(ll j=1; j<=25; j++)
    {
        for(ll i=0; i+(1<<j)<=n; i++)
        {
            dp[i][j]=GCD(dp[i][j-1],dp[i+(1<<j)/2][j-1]);
        }
    }
}
ll chec(ll l,ll r)
{
    if(l==r)
        return  v[l];
    ll ind=Log[r-l+1];
    return GCD(dp[l][ind],dp[r-(1<<ind)+1][ind]);
}
int main()
{
    ll n;
    cin>>n;
    ll q;
    Log[1]=0;
    for(ll i=2; i<=n; i++)
        Log[i]=Log[i/2]+1;

    for(ll i=0; i<n; i++)
    {
        cin>>dp[i][0];
        v.push_back(dp[i][0]);
    }
    build(n);
    for(ll i=0; i<n; i++)
    {
        ll gcd=v[i];
        ll b=i;
        while(b<n)
        {
            ll l=b,r=n;
            while(r-l>1)
            {
                ll mid=(l+r)>>1;
                if(chec(i,mid)!=gcd)
                    r=mid;
                else
                    l=mid;
            }
            res[gcd]+=(r-b);
            b=r;
            gcd=chec(i,r);
        }
    }

    cin>>q;
    ll a;
    for(ll i=0; i<q; i++)
    {
        cin>>a;
        cout<<res[a]<<endl;
    }
}

