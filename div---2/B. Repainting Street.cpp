
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
        ll n,m,a,b,k;
        cin>>n>>k;
        ll mn=INT_MAX;;
        vector<ll>v(n+12);
        set<ll>st;
        for(ll i=1; i<=n; i++)
        {
            cin>>v[i];
            st.insert(v[i]);
        }
        if(st.size()==n)
        {
            cout<<n-1<<endl;
            continue;
        }
        set<ll>:: iterator it;
        for( it=st.begin(); it!=st.end(); it++)
        {
            a=*it;
            ll cnt=0;
            ll f=1;
            ll j=0;
            for(ll i=1; i<=n; i++)
            {
                if(f&&a==v[i])
                {
                    j=0;
                    continue;
                }
                if(f&&a!=v[i])
                    cnt++,f=0;
                j++;
                if(j%k==0)
                    f=1,j=0;
            }
            mn=min(cnt,mn);
        }

        cout<<mn<<endl;
    }
    return 0;
}


