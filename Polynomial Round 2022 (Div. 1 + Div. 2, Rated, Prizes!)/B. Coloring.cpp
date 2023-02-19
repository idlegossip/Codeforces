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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>v,tmp;
        ll a;
        for(int i = 0; i < m; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll mx = ((n+k - 1)/k);
        ll md = n % k;
        ll f  = 0;
        ll cnt = 0;
        for(int i = 0; i < m; i++)
        {
            if(v[i] > mx)
            {
                f = 1;
            }
            if(mx == v[i])
                cnt++;
        }

        if(f or m < k or (md > 0 and cnt >  md))
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}
