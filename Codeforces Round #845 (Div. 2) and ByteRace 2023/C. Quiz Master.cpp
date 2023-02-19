#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+7;
vector<int>Div[N];

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>v,mp(N,0);
        ll cnt = 0;
        ll a;
        ll mx = 0;
        ll mn = N;
        set<int>st;
        for(int i = 0; i < n ; i++)
        {
            cin>>a;
            mx = max(a,mx);
            mn = min(a,mn);

            for(int  j = 1; j * j  <= a; j++)
            {
                if(a % j==0)
                {
                    if(j <= m and j >= (m/2)+ 1){
                         mp[j] = 1;
                         st.insert(a);
                    }

                    if(a/j >= (m/2)+ 1 and a/j != j and (a/j) <= m)
                        Div[a].push_back(a/j);
                }
            }
        }
        ll ans = -1;
        ll l = 0, r = mx;
}

