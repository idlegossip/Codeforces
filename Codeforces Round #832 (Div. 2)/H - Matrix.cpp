
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,w;
    string s;
    cin>>n>>w;
    cin>>s;
    vector<ll>pre(n+1,0);
    for(int i = 0; i < n; i++)
    {
        ll a = s[i] - '0';
        pre[i] = a;
        if(i)
        {
            pre[i] += pre[i-1];
        }
    }
    ll a,b;
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        a = pre[n-1];
        if(i)
            a =  a -  pre[i-1];
        ll x = s[i] - '0'
        for(int j = i ; j < n ; j++)
        {
            b = pre[n-1];
            if(j)
            {
                b =  b -  pre[j-1];
            }
            if( (a * b)==w)
            {
                ans++;
            }
        }

    }
    cout<<ans<<'\n';
}
