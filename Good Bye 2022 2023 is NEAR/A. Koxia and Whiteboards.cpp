#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a;
        vector<ll>v,v1;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i = 0; i < m; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        sort(v.begin(),v.end());
        ll ans =  0;
        ll l = 0;
        for(int i = 0; i < m; i++)
        {
            ll mn = INT_MAX;
            ll ind = 0;
                     for(int j = 0; j < n; j++)
            {
                if(v[j] < mn)
                {
                    mn = v[j];
                    ind = j;
                }
            }
            v[ind] = v1[i];
        }
        for(int j = 0; j < n; j++)
        {
            ans += v[j];
        }
        cout<<ans<<'\n';
    }
}

