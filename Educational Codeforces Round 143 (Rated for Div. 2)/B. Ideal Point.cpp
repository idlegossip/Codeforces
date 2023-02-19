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
        ll n,k;
        cin>>n>>k;
        map<int,int>mp;
        vector<ll>v(100,0);
        ll a,b;
        ll f = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>a>>b;
            if(a <= k and k <= b)
            {
                mp.clear();
                for(int j = a; j <= b; j++)
                {
                    v[j]++;
                    mp[v[j]]++;
                }
                if(mp[v[k]]==1){
                    f = 1;
                }
            }
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
