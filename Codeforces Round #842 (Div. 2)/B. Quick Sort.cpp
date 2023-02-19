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
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        ll a;
        ll f= 1;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            if(a != (i+1))
                f = 0;
            v.push_back(a);
        }
        if(f)
        {
            cout<<0<<'\n';
        }
        else
        {
            ll cnt = 0;
            for(int i = 1; i <= n; i++)
            {
                if(v[i-1] == cnt+1)
                {
                    cnt++;
                }
            }
            ll ans = (n-cnt)/k;
            if((n-cnt) % k)
                ans++;
            cout<<ans<<'\n';

        }

    }
}

