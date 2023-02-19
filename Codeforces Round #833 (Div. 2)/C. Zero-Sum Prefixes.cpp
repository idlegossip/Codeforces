#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        map<ll,ll>mp;
        int a;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int ans = 0;
        ll tot = 0;
        ll mx = 0;
        int f = 0;
        for(int i = 0; i < n ; i++)
        {
            if(v[i]==0)
            {
                ans++;
                if(f)
                    ans += (mx-1);
                else
                {
                    ans += mp[0];
                }
                mp.clear();
                f   = 1;
                mx  = 0;
            }
            tot += v[i];
            mp[tot]++;
            mx = max(mx,mp[tot]);
        }
        if(f)
        {
            if(mx)
                ans += (mx-1);
        }
        else
            ans+=mp[0];
        cout<<ans<<'\n';
    }
}
