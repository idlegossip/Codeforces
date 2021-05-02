#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c;
        vector<ll>v;
        vector<ll>v1;
        ll n;
        cin>>n;
        ll ar[n+10];
        ll mx=0;
        ll j=n;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            mx=max(a,mx);
            ar[i]=mx;
        }

        for(ll i=n-1; i>=0; i--)
        {
            if(v[i]==ar[i])
            {
                reverse(v.begin()+i,v.begin()+j);
                j=i;
            }
        }
        reverse(v.begin(),v.end());
        for(ll i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<endl;

    }
    return 0;
}


