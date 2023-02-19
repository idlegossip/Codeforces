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
        vector<ll>v;
        ll a;
        ll mul  = 0;
        ll ans = -1;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
            if(a > 1)
                mul++;
        }
        if(mul%2)
        {
            cout<<-1<<'\n';
        }
        else
        {
            ll cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(v[i] > 1)
                    cnt++;

                if(cnt == (mul/2))
                {
                    cout<<(i+1)<<'\n';
                    break;
                }
            }
        }
    }
}

