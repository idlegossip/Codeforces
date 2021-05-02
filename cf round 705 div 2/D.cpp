#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ar[300000];
ll tree[800005];
ll mod=1e9+7;
ll GCD(ll a,ll b)
{
    return (b == 0) ? a:GCD(b,a%b);
}
void build(ll p,ll l,ll r)
{
    if(l==r)
    {
        tree[p]=ar[l];
        return;
    }
    ll le=2*p;
    ll mid=(l+r)/2;
    build(le,l,mid);
    build(le+1,mid+1,r);
    tree[p]=(GCD(tree[le]%mod,tree[le+1]%mod)%mod);
    //cout<<mod<<" ";

}
void update(ll p,ll l,ll r,ll i,ll x)
{
    if(r<i||l>i)
        return;
    if(l==i&&r==i)
    {
        tree[p]=(tree[p]*x)%mod;
        return;
    }
    ll le=2*p;
    ll mid=(l+r)/2;
    update(le,l,mid,i,x);
    update(le+1,mid+1,r,i,x);
    tree[p]=(GCD(tree[le]%mod,tree[le+1]%mod)%mod);
}
ll query(ll p,ll l,ll r,ll i,ll j)
{
    if(r<i||l>j)
        return 0;
    if(l>=i&&r<=j)
    {
        return  tree[p];
    }
    ll le=2*p;
    ll mid=(l+r)/2;
    query(le,l,mid,i,j);
    query(le,mid+1,r,i,j);
}
int main()
{
    ll n,m;
    cin>>n>>m;
    memset(tree,0,sizeof(tree));
    for(ll i=1; i<=n; i++)
        cin>>ar[i];
    build(1,1,n);
    ll a,x;
    for(ll i=0; i<m; i++)
    {
        cin>>a>>x;
        update(1,1,n,a,x);
        cout<<tree[1]%mod<<endl;

    }
}

