#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll p=1;
        ll f=0;
        ll j=n;
        ll i = 1;
        while(i<n)
        {
            if(v[i-1]>v[i])
            {
//                if((v[i-1]<=0 and v[i]<=0 ) or (v[i-1]>0 and v[i]>0))
//                    f=1;
                while(j>i and v[j-1]>0)
                    j--;
                if(j>i)
                {
                    v[i-1]*=-1;
                    v[j-1]*=-1;
                }
            }
            i++;
        }
        for(ll i=1; i<n; i++)
            if(v[i-1]>v[i])
                f=1;
        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
