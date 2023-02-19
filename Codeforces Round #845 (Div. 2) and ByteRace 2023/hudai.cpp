#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k;
vector<pair<ll,ll>>vp;
ll dp[201][5500][3];
ll ans = 0;
void go(ll ind ,ll st,ll cnt1,ll cnt2,ll f)
{

    if(st == k)
    {
        ans = max(ans,min(cnt1,cnt2));
        return ;
    }
    if(ind >= n)
        return;
    if(dp[ind][cnt2][f] != -1){
        return ;
    }
    go(ind + 1,st+1,cnt1 + vp[ind].first,cnt2 + vp[ind].second,1);
    go(ind + 1,st,cnt1,cnt2,0);
    dp[ind][cnt2][f] = 1;
    return ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    t = 1;
    memset(dp,-1,sizeof dp);
    while(t--)
    {
        cin>>n>>k;
        ll a;
        int cnt = 0,cnt1= 0;
        for(int i = 0; i < n; i++){
            cnt = 0;
            cnt1=0;
           cin>>a;
        while(a % 2==0)
            cnt++, a/= 2;
         while(a % 5==0)
            cnt1++, a/= 5;
            vp.push_back({cnt,cnt1});
        }
       ans = 0;
       go(0,0,0,0,0);
       cout<<ans<<'\n';
       vp.clear();
    }
}

