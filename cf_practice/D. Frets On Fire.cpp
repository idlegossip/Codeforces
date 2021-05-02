#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m;
    vector<ll>v;
    set<ll>st;
    ll a;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        st.insert(a);
    }
    ll f=0;
    auto x=st.begin();
    ll p=*x;
    for(auto it : st)
    {
        f++;
        if(f==1)
        continue;
        ll d =it-p;
        v.push_back(d);
        p=it;
    }
    sort(v.begin(),v.end());
    m=v.size();
    ll pr[m+10];
    pr[0]=0LL;
    for(ll i=1;i<m;i++)
    {
        pr[i]=pr[i-1]+v[i-1];
    }
    if(v.size())
    pr[m]=pr[m-1]+v[m-1];
    ll q;
    cin>>q;
    ll l,r;
    ll c,d;
    for(ll i=0;i<q;i++)
    {
        cin>>c>>d;
        ll dis=(llabs(c-d))+1LL;
        l=1;
        r=m;
        ll ind=0LL;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(v[mid-1]<dis)
            {
                ind=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        //cout<<pr[ind]<<" "<<m<<" "<<dis<<endl;
        cout<<pr[ind]+(m-ind+1LL)*dis<<endl;
    }
}
