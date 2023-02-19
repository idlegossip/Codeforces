#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll a,x,f1=1;
        cin>>n;
        vector<ll>v;

        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(i==0)
                x=a;
            if(i!=0&&x>a)
                f1=0;
            x=a;
            v.push_back(a);
        }
        if(f1)
        {
            cout<<0<<endl;
            continue;
        }
        ll f=0;
        ll l=n-1;

        if(v[l]<v[l-1]||v[l-1]<(v[l-1]-v[l]))
        {
            f=1;
        }
        if(f)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<l-1<<endl;
        for(ll i=1; i<=l-1; i++)
            cout<<i<<" "<<l<<" "<<l+1<<endl;


    }
}


