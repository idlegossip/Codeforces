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
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll l = 0, r= n/2;
        ll ans = 0;
        while(l <=r)
        {
            ll mid = (l+r)>>1;
            ll f= 1;
            set<int>st;
            for(ll i = 1; i <= mid; i++)
            {
                st.insert(i);
                st.insert(n-i+1);
            }
            ll s = mid+1,en = n - mid;
            ll r1 =  n - 1;
            for(int i = 0; i <= r1; i++)
            {
                if(st.find(v[i])== st.end())
                {
                    if(v[i]==s)
                    {
                        s++;
                    }
                    else
                    {
                        f = 0;
                        break;
                    }
                }
                if(f)
                {
                    while(r1 >i)
                    {
                        if(st.find(v[r1])== st.end())
                        {
                            if(v[r1]==en)
                            {
                                r1--;
                                en--;
                                break;
                            }
                            else
                            {
                                f = 0;
                                break;
                            }
                        }
                        r1--;
                    }
                }
                if(!f)
                    break;
            }
            if(f){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout<<ans<<'\n';
    }
}

