#include<bits/stdc++.h>
using namespace std;
using ll = long long ;


#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 3005;
ll dp[N][N];
string str;
int go(ll i,ll j)
{
    if(i >=j ){
        return 0;
    }
    if(dp[i][j] != -1)
        return dp[i][j];
    int ans = 0;
    int y1  = go(i,j-1);
    int x   = go(i,j-2);
    int x1  = go(i+2,j);
    return dp[i][j]=ans;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof dp);
        ll n;
        ll a;
        cin>>str ;
        n = str.size();
        string s = go(0,n-1);
        a = go(0,n-1);
        if(s==an)
        cout<<"draw"<<'\n';
        else if(s<an)
        {
            cout<<"Alice"<<'\n';
        }
        else
            cout<<"Bob"<<'\n';



    }
}


