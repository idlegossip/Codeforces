#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll check(const vector<ll>&a,const vector<ll>&b)
{
    ll n=a.size();
    ll m=b.size();
    ll res=0;
    vector<ll>suf(n+10);
    ll l=m-1;
    for(ll i=n-1;i>=0;i--)
    {
        suf[i]=suf[i+1];
        while(l>=0&&a[i]<b[l])l--;
        if(l>=0&&a[i]==b[l])suf[i]++;
    }
    ll r=0,j=0;
    for(ll i=0;i<m;i++)
    {
       while(r<n&&a[r]<=b[i]+r)r++;
       while(j<m&&b[j]-b[i]<r)j++;
       res=max(res,(j-i+suf[r]));
    }
    return res;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        vector<ll>pa,pb,na,nb;
        cin>>n>>m;
        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            if(a>0)
                pa.push_back(a);
            else
                na.push_back(-a);
        }
        ll b;
        for(ll i=0;i<m;i++)
        {
            cin>>a;
            if(a>0)
                pb.push_back(a);
            else
                nb.push_back(-a);
        }
        reverse(na.begin(),na.end());
        reverse(nb.begin(),nb.end());
        cout<<(check(na,nb)+check(pa,pb))<<endl;
    }
}
