#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll>v;
        map<ll,ll>mp;
        ll a;
        mp[n] = 1;
        ll tmp = n;
        n = tmp;
        ll ans = n;
        ll cnt = 0;
        while((n & ans) != x and (n & ans) != 0LL)
        {
            if((ans & (1LL<<cnt)))
            {
                ans ^= (1LL<<cnt);
                if( !(ans & (1LL<<(cnt+1))))
                    ans ^= (1LL<<(cnt+1));
            }

            cnt++;
        }
        if(n > ans){
                cout<<-1<<'\n';
                continue;
            }
        if((n & ans)== x)
        cout<<ans<<'\n';
        else{
            cout<<-1<<'\n';
        }


//        ll a;
//        for(int i = 0; i < n;i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}

