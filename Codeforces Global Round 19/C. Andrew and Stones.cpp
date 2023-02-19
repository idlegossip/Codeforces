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
        vector<ll>v,v1;
        cin>>n;
        ll a;
        ll f=0;
        ll ans=0;
        ll one=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            if(a==1&&i>0&&i<n-1)
                one++;

        }
        if((n==3&&v[1]%2==1)||(one==(n-2)))
        {
                cout<<-1<<endl;
                continue;
        }
        for(ll i=1;i<n-1;i++)
        {
            ans+=(v[i]+1)/2;

        }

        cout<<ans<<endl;

    }
}


