#include<bits/stdc++.h>
using  namespace std;
#define ll long long
const ll N = 1e4;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        set<int>st;
        vector<int>v(n+1),v1;
        for(int i = 1; i <= n ; i++)
        {
            v[i] = i;
        }

        v[1] = x;
        v[n] = 1;
        ll tm = n;
        ll l = x;
        ll ind = 0;
//        while(tm > 1 and tm % x==0)
//        {
//            if(tm != x)
//            v1.push_back(tm);
//            tm /= x;
//        }
        for(int i = 1; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                st.insert(i);
                if(n/i != i)
                {
                    st.insert(n/i);
                }
            }
        }
        for(auto it : st )
        {
            if(x >= it) continue;
            v1.push_back(it);
        }
        if(n % x != 0 and x != n)
        {
            cout<<-1<<'\n';
            continue;
        }
        ll sz = v1.size();
        for(ll i = 2; i < n; i++)
        {
            if(i==l)
            {
                while(ind < sz and v1[ind] % i != 0){
                    ind++;
                }
                l = v1[ind];
                v[i] = v1[ind++];
            }
        }
        for(int i = 1; i <= n; i++)
        {
            cout<<v[i]<<' ';
        }
        cout<<'\n';
    }
}
