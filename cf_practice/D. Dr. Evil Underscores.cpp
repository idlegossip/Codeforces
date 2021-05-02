#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll recur(vector<ll>&v1,ll bit)
{
    if(bit<0)
        return 0LL;
    vector<ll>off;
    vector<ll>on;
    for(ll i=0; i<v1.size(); i++)
    {

        if(((v1[i]>>bit)&1)==0)
            off.push_back(v1[i]);
        else
            on.push_back(v1[i]);
    }
    if(off.size()==0)
        return recur(on,bit-1) ;
    if(on.size()==0)
        return recur(off,bit-1) ;
    return min(recur(on,bit-1),recur(off,bit-1))+(1<<bit);
}
int main()
{
    ll t;
    ll n;
    vector<ll>v;
    cin>>n;
    ll a;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cout<<recur(v,30)<<endl;
}
