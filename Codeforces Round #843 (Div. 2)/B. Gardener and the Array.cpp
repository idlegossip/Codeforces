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
        ll k;
        map<int,int>mp;
        ll f= 0;
        vector<int>g[n+1];
        for(int i = 0; i < n; i++)
        {
            cin>>k;
            int f1 = 1;
            for(int j = 0; j < k; j++)
            {
                cin>>a;
                g[i].push_back(a);
                mp[a]++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            int f1 = 1;
            for(auto x : g[i])
            {
                if(mp[x]-1 ==0)
                {
                    f1=0;
                    break;
                }
            }
            if(f1)
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}

