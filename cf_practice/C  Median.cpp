#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;

    cin>>n>>x;
    vector<ll>v;
    ll a;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    auto it=lower_bound(v.begin(),v.end(),x);
    ll ind=n+1;
    if(it!=v.end())
    {
        for(ll i=0; i<n; i++)
            if(v[i]<=*it)
                ind=i+1;
    }
    if(it==v.end())
    {
        it--;
        if(it==v.begin())
            ind=0;

    }
    ll median=((n+1)/2);
    cout<<*it<<" x  "<<v[median-1]<<endl
    ll m=abs(median-ind);
    ll res=0;
    if(m%2)
        cout<<2LL*(m-1)+1<<endl;
    else
        cout<<2LL*m<<endl;
        return 0;
}
