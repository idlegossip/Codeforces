#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    //vector<ll>v1;
//    for(int i = 1; i <= 1000; i++)
//    {
//        ll f= 1;
//        for(int j = 2 ; j * j <= i; j++)
//        {
//            if(i % j==0)
//                f = 0;
//
//        }
//        if(f)
//            v1.push_back(i);
//    }
    while(t--)
    {
        ll n;
        cin>>n;

        ll a;
        vector<ll>v,v1;
        ll mx = 0,mn = LONG_LONG_MAX;
        map<ll,ll>mp;
        set<ll>st;
        ll g = 0;
        for(ll i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;
            if(mp[a] > 1)
                mx = 1;
        }
        if(mx)
        {
            cout<<"NO\n";
            continue;
        }
        mx = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                st.insert(__gcd(v[i],v[j]));
            }
        }
        ll f1 = 1;
        ll
        for(auto k : st)
        {
            for(ll jj = k; jj<= (k*10LL); jj+=k)
            {
                ll f= 1;
                for(int i = 0; i < n; i++)
                {
                    for(int j = i+1; j < n; j++)
                    {
                        a = __gcd((v[i] + jj+ 1LL),(v[j] + 1LL+ jj));
                        if(a > 1)
                        {
                            f = 0;
                            break;
                        }
                    }
                    if(!f)
                    {
                        break;
                    }
                }
                if(f)
                {
                    cout<<"YES\n";
                    f1 = 0;
                    break;
                }
            }
            if(!f1)
                break;
        }
        if(f1)
        {
            cout<<"NO\n";
        }

    }
}

