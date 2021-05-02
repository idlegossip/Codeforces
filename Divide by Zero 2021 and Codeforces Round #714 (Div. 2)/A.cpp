#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k==0)
        {
            for(ll i=1;i<=n;i++)
                cout<<i<<" ";
            cout<<endl;
            continue;
        }
        if(n<=2)
        {
            cout<<-1<<endl;
            continue;
        }
        if((n-1)/2<k)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<ll>v;
        map<ll,ll>mp;
        ll a=n;
        ll b=2;
       cout<<1<<" ";
        mp[1]=1;
        while(k--)
        {
           cout<<a<<" ";
            a--;
            cout<<b<<" ";
             b++;
        }
        for(ll i=b;i<=a;i++)
            cout<<i<<" ";
        cout<<endl;

    }
}
