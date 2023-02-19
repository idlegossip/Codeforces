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
        ll a;
        vector<ll>v;
        map<int,int>mp;
        for(int i = 0; i <  n; i++)
        {

            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll ans = 0;
        ll mx = 0;
        ll cnt = 0;
        ll ls = 0;
        mp[0] = 1;
        for(int i = 0; i <  n; i++)
        {
            if(i != n-1 and v[i] <= cnt and cnt+1 < v[i+1])
                ans++;
            else if(i == n-1){
                    ans++;
            }
            cnt++;
        }
        if(v[0]!=0)
            ans++;
        cout<<ans<<'\n';

    }
}

