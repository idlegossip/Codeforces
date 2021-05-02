#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    ll k;
    vector<ll>v;
    ll a;
    cin>>n>>k;
    while(n)
    {
        a=n%10;
        v.push_back(a);
        n/=10;
    }
    reverse(v.begin(),v.end());
    n=v.size();
    for(ll i=0; i<n; i++)
    {
        if(k<=0)
            break;
        ll mx=v[i];
        ll ind=i;
        for(ll j=i+1; j<=min(i+k,n-1); j++)
        {
            if(v[j]>mx)
            {
                ind=j;
                mx=v[j]    ;
            }
        }
        if(mx>v[i])
        {
            k-=(ind-i);
            for(ll j=ind-1; j>=i; j--)
            {
                swap(v[j],v[j+1]);
            }


        }


    }
    for(ll j=0; j<n; j++)
        cout<<v[j] ;
    cout<<endl;
}

