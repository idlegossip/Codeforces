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
        ll a;
        cin>>n;
        map<ll,ll>mp;
        ll j=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            j=0;
            while(a)
            {

                if(a%2)
                    mp[j]=1;
                a/=2;
                j++;

            }
        }
        ll sum=0;
        for(ll i=0;i<32;i++)
        {
            if(mp[i])
                sum+=(1<<i);
        }
        cout<<sum<<endl;
    }
}
