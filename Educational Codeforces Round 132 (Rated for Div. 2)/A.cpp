#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll ar[4];
        ll x;
        cin>>x;
        ar[0]=0;
        for(ll i=1; i<=3; i++)
            cin>>ar[i];
        vector<ll>v(10,0);
        ll cnt=0;
        v[x]=1;
        while(ar[x])
        {
            cnt++;

            x=ar[x];
            v[x]=1;

            if(cnt>5) break;
        }
        ll f=1;
        for(ll i=1;i<=3;i++)
        {
            if(v[i]==0)
                f=0;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
