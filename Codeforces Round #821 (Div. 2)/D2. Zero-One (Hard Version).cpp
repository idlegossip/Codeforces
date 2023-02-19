#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[5005][5005] ;
const ll inf = 1e16+7;
vector<ll>v;
ll go(int l, int r, ll x,ll y)
{
    if(l >= r) return 0;
    if(l == r - 1)
    {
        if(v[l]+1 == v[r])
        {
            return x;
        }
        else
        {
            return min((v[r]-v[l]) * x ,y);
        }
    }
    if(dp[l][r] != -1) return dp[l][r];
    ll ans = x;
    if(v[l] != v[r]-1)
    {
        ans = min((v[r] - v[l])*x,y);
    }
    dp[l][r] = ans+go(l+1,r-1,x,y);

    ans = x;
    if(v[l] != v[l+1]-1)
    {
        ans = min((v[l+1] - v[l])*x,y);
    }
    dp[l][r] = min(dp[l][r],ans+go(l+2,r,x,y));

    ans = x;
    if(v[r-1] != v[r]-1)
    {
        ans = min((v[r] - v[r-1])*x,y);
    }
    dp[l][r] = min(dp[l][r],ans+go(l,r-2,x,y));
    return dp[l][r];

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        v.clear();
        string s,s1;
        ll n,x,y;
        cin>>n>>x>>y;
        for(int  i = 0; i <= n; i++)
        {
            for(int j = 0; j<= n; j++)
            {
                dp[i][j] = -1;
            }
        }
        cin>>s>>s1;

        ll f = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != s1[i])
            {
                if(i and s[i-1] != s1[i-1])
                {
                    f = 1;
                }
                v.push_back(i);
            }

        }
        int cnt = v.size();
        if(cnt % 2 )
        {
            cout<<-1<<'\n';
            continue;
        }
        if(n == 2){
           cout<<x*(cnt/2)<<'\n';
           continue;
        }
        ll sum = 0;
        if(f and cnt == 2)
        {
            sum = min(x,2*y);
        }
        else
            sum = (cnt / 2) * y;

        int k = v.size();
        cout<<min(sum,go(0,k-1,x,y))<<'\n';

    }
}
