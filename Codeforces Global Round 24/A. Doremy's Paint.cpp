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
        ll n;
        cin>>n;
        map<int,int>mp;
        ll a;
        vector<ll>v;
        ll l = - 1, r= 0;
        ll f= 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;
            if(mp[a] > 1)
                f = 1;
        }
        if(!f)
        {
            cout<<1<<' '<<n<<'\n';
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(l < 0 and mp[v[i]]>1)
                {
                    l = i;

                }
                if(mp[v[i]] > 1)
                    r = i;
            }
            cout<<l+1<<' '<<r+1<<'\n';

        }
    }
}

