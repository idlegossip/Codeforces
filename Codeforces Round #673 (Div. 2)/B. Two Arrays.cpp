
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp;
        ll a,b,c;
        ll n,k;
        cin>>n>>k;
        ll f=0;
        b=k/2;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(k%2)
            {
                if(a<=b)
                    mp[i]=1;
                else
                    mp[i]=0;
            }
            else
            {
                if(a<b)
                    mp[i]=1;
                else if(a==b)
                {
                    if(f)
                        mp[i]=0,f=0;
                    else
                        mp[i]=1,f=1;
                }
                else
                    mp[i]=0;
            }
        }

        for(ll i=0; i<n; i++)
            cout<<mp[i]<<" ";
        cout<<endl;
    }
    return 0;
}
