#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll res[1010] ;
ll n;
vector<ll>v;
void recur(ll l,ll r,ll d)
{
    if(l>r)
        return;
    if(l==r)
    {
        res[l]=d;
        return;
    }
   // cout<<l<<" "<<r<<endl;
    ll mx=0,ind=-1;
    for(ll i=l; i<=r; i++)
    {
        ll a=v[i];
       // cout<<a<<" ";
        if(a>mx)
        {
            mx=a;
            ind=i;
        }
    }
    res[ind]=d;
    recur(l,ind-1,d+1);
    recur(ind+1,r,d+1);
    return;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        memset(res,0,sizeof(res));
        v.clear();

        ll a;
        ll mx=0,ind=-1;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            if(a>mx)
            {
                mx=a;
                ind=i;
            }
        }
        //cout<<ind<<endl;
        res[ind]=0;
        recur(0,ind-1,1);
        recur(ind+1,n-1,1);

        for(ll i=0; i<n; i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;


    }
}
