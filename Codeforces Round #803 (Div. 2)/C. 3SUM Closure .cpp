#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v,v1,v2;
        ll a,k,n;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(a==0 and v.size()<2)
                v.push_back(a);
            else if(a>0)
                v1.push_back(a);
            else if(a<0)
                v2.push_back(a);
        }
        if(v1.size()>=3 or v2.size()>=3)
        {
            cout<<"NO\n";
            continue;
        }

        for(ll a : v1) v.push_back(a);
        for(ll a : v2) v.push_back(a);
        n=v.size();
        ll f=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                for(ll k=j+1; k<n; k++)
                {
                    bool ok=false;
                    for(ll l=0; l<n; l++)
                    {
                        if((v[i]+v[j]+v[k])==v[l])
                            ok=true;
                    }
                    if(!ok)
                    {
                        cout<<"NO"<<endl;
                        f=1;
                        break;
                    }
                }
                if(f)break;
            }
            if(f)break;
        }
        if(!f)
        {
            cout<<"YES"<<endl;
        }
    }
}

