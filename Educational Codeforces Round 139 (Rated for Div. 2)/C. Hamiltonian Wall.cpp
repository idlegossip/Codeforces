#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+10;
string s[3];
ll dp[3][N+1][2];
ll ans = 0;
ll n ;
ll mx;
void go(ll i,ll j,ll l,ll f,ll b,ll w)
{
    //cout<<i<<' '<<j<<endl;
    if(b== ans and w==0)
    {
        mx = 1;
    }
    if(j == n)
        return ;
    if(dp[i][j][f] != -1)
    {
        return ;
    }
    if(s[i][j] == 'w')
    {
        if(i and l == 0)
            go(i-1,j,1,f,b,w+1);
        else if(l == 1)
            go(i+1,j,2,f,b,w+1);
        go(i,j+1,l,f,b,w+1);
    }
    else
    {
        if(i and l == 0)
            go(i-1,j,1,f,b+1,w);
        else if(l == 1)
            go(i+1,j,2,f,b+1,w);
        go(i,j+1,l,f,b+1,w);
    }
    if(!f and j == 0)
    {
        go(i+1,j,2,1,b,w);
    }
    dp[i][j][f] = 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 0; i < 2; i++)cin>>s[i];
        ans = 0;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < n; j++)
            {
                dp[i][j][1] = -1;
                dp[i][j][0] = -1;
                if(s[i][j]=='B')
                    ans++;
            }
        }
        mx = 0;
        //cout<<"Here\n";
        go(0,0,0,0,0,0);
        //cout<<"Here\n";
        if(mx)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}


