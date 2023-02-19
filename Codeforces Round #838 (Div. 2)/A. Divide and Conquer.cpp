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
        vector<ll>v,v1;
        ll cnt = 0;
        ll f = 0,f1 = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            if(a%2)
            {
                cnt++;
                v.push_back(a/2);
                if((a/2)%2==0)
                    f = 1;
            }
            else
            {
                v1.push_back(a/2);
                if((a/2)%2==1)
                    f1= 1;
            }
        }
        if(cnt %2==0)
        {
            cout<<0<<'\n';
        }
        else if(f or f1)
        {
            cout<<1<<'\n';
        }
        else
        {
            ll ans = 1, ans1 = 1;
            ll sz = v.size();
            while(1 and sz)
            {
                ans++;
                for(int i = 0; i < sz; i++)
                {
                    a = v[i];
                    if((a/2)%2==0)
                    {
                        f = 1;
                        break;
                    }
                    v[i] = a/2;
                }
                if(f)
                    break;
            }
            sz = v1.size();
            while(1 and sz)
            {
                ans1++;
                for(int i = 0; i < sz; i++)
                {
                    a = v1[i];
                    if((a/2)%2==1)
                    {
                        f1 = 1;
                        break;
                    }
                    v1[i] = a/2;
                }
                if(f1)
                    break;
            }
            if(sz)
            cout<<min(ans1,ans)<<'\n';
            else{
                cout<<ans<<'\n';
            }

        }

    }
}


