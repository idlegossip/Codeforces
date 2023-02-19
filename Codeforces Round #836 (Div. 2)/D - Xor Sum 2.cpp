#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    ll a;
    vector<ll>v;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    vector<ll>cnt(40,0);
    ll r= 0;
    ll ans = 0;
    ll mx = 0;
    for(int i = 0; i < n; i++)
    {
        while(r < n and mx < 2)
        {
            for(int j = 0; j < 30; j++)
            {
                if((v[r]&(1<<j)))
                {
                    cnt[j]++;
                    mx = max(mx,cnt[j]);
                }
            }
            r++;
        }
        if(i != r)
        {
            if(mx <= 1)
            {
               // cout<<mx<<' '<<i<<' '<<r<<'\n';
                ans += (r - i);
            }
            else if( mx >= 2)
            {
                //cout<<mx<<' '<<i<<' '<<r<<'\n';
                ans += (r - 1- i);
            }
        }
        mx = 0;
        for(int j = 0; j < 30; j++)
        {
            if((v[i]&(1<<j)))
            {
                cnt[j]--;
            }
            mx =max(mx,cnt[j]);
        }
        //cout<<mx<<'\n';
    }
    cout<<ans<<'\n';

}
