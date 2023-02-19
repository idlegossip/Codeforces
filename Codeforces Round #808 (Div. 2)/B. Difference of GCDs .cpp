#include<bits/stdc++.h>
using namespace std;
#define ll  long long
ll sf[1010101];
int main()
{
    ll N = 1010101;
    for(ll i=1; i<N; i++)
    {
        sf[i]  =  i;
    }
    for(ll i=2; i<N; i++)
    {
        if(sf[i]==i)
        {
            for(ll j=i; j<N; j+=i)
            {
                sf[j] = min(sf[j],i);
            }
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, l, r;
        cin>>n>>l>>r;
        ll a;
        vector<ll>v,use(n+1,0);
        ll f=1;
        ll k=1;
        for(ll j=1; j<=n; j++)
        {
            if(l%j==0)
            {
                v.push_back(l);
            }
            else
            {
                a= r%j;
                a = r-a;
                if(l<=a)
                {
                    v.push_back(a);
                }
                else
                    f=0;
            }

        }

        if(f)
        {
            cout<<"YES"<<endl;
            for(ll i=0; i<n; i++)
                cout<<v[i]<<" \n"[i==n-1];
        }
        else
            cout<<"NO"<<endl;
    }
}

