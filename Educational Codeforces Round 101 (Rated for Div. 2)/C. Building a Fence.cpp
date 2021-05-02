#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{

    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll a;
        ll n,k;
        cin>>n>>k;
        ll mn,mx;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll f=1;
        mx=v[0];
        mn= v[0];
        for(ll i=1; i<n; i++)
        {
            mx=min(mx+k-1,v[i]+k-1);
            mn=max(mn-k+1,v[i]);
            if(mx<mn)
            {
             //   cout<<v[i]<<"   "<<mx+k-1<<"   "<<mn-k+1<<endl;
                f=0;
                break;
            }
        }
        if(f&&v[n-1]>=mn)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;

}
