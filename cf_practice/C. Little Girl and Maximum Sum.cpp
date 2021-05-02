#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct seg
{
    ll val ;
    ll prop;
};
seg tree[800005];
void push_down(ll l,ll r,ll p)
{
    if(l!=r)
    {
        tree[2*p].prop+=tree[p].prop;
        tree[2*p+1].prop+=tree[p].prop;
        tree[p].prop=0;

    }
}
void build(ll l,ll r , ll p)
{
    if(l==r)
    {
       tree[p].val=0;
       tree[p].prop=0;
       return;
    }
    ll mid=(l+r)/2;
    build(l,mid,2*p);
    build(mid+1,r,2*p+1);
    tree[p].val=tree[2*p].val+tree[2*p+1].val;
    tree[p].prop=tree[2*p].prop+tree[2*p+1].prop;
}
void update(ll l,ll r,ll p,ll i,ll j)
{
    if(tree[p].prop)
    {
        push_down(l,r,p);
    }
    if(l>j||r<i)
        return;
    if(l>=i&&r<=j)
    {
      tree[p].prop++ ;
      push_down(l,r,p);
      return;
    }
    ll mid=(l+r)/2;
    update(l,mid,2*p,i,j);
    update(mid+1,r,2*p+1,i,j);
}
ll query(ll l,ll r,ll p,ll x)
{
    if(tree[p].prop)
    {
        push_down(l,r,p);
    }
    if(l>x||r<x)
        return 0;
    if(l==r&&l==x)
    {
        return tree[p].prop;
    }
    ll mid=(l+r)/2;
    ll p1=query(l,mid,2*p,x);
    ll p2=query(mid+1,r,2*p+1,x);
    return p1+p2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    vector<pair<ll,ll> >vp,vp1;
    vector<ll>v;
    ll a,b;
    cin>>n>>m;
    vector<ll>v1(n+10);
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    build(1,n,1);
    for(ll i=0;i<m;i++)
    {
        cin>>a>>b;
        vp.push_back({b,a});
        update(1,n,1,a,b);
    }
    for(ll i=1;i<=n;i++)
    {
       a=query(1,n,1,i);
       vp1.push_back({a,i});
    }
    sort(v.begin(),v.end());
    sort(vp1.begin(),vp1.end());
    sort(vp.begin(),vp.end());
    for(ll i=0;i<n;i++)
    {
        a=vp1[i].second;
        b=vp1[i].first;
       // cout<<a<<" d "<<b<<endl;
        v1[a]=v[i];

    }
    ll ans=0,j=0;
    ll prex[n+10];
    prex[0]=0;
    for(ll i=1;i<=n;i++)
    {
        //cout<<v1[i]<<" ";
        prex[i]=prex[i-1]+v1[i];
        while(vp[j].first==i)
        {
            b=vp[j].second;
            ans+=(prex[i]-prex[b-1]);
            j++;
        }
    }
    cout<<ans<<endl;
}
