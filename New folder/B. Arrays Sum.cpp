#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll n;
        ll a,k;
        cin>>n>>k;
        set<ll>st;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            st.insert(a);
            v.push_back(a);
        }
        if(k==1&&st.size()!=1)
        {
            cout<<-1<<endl;
            continue;
        }
        ll cnt=0;
        while(1)
        {
            cnt++;
            ll mx=0;
            st.clear();
            for(ll i=0;i<n;i++)
            {
                if(st.size()<k)
                {
                    st.insert(v[i]);
                    mx=max(v[i],mx);
                    v[i]=0;
                }
                else
                {
                    v[i]-=mx;

                }
            }
            if(v[n-1]==0)
                break;

        }
        cout<<cnt<<endl;
    }

}
