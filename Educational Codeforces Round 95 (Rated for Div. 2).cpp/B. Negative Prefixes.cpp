#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        long long x,y,n,m;
        long long res=0;
        cin>>n;
        ll ar[n+10];
        ll bb[n+10];
        vector<ll>v;
        vector<ll>vp;
        for(ll i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        for(ll i=1; i<=n; i++)
        {
            cin>>bb[i];
            if(!bb[i])
            {
                if(ar[i]<0)
                    v.push_back(ar[i]);
                else
                    vp.push_back(ar[i]);

            }

        }
        sort(v.begin(),v.end(),greater<ll>());
        sort(vp.begin(),vp.end(),greater<ll>());
        m=v.size();
        ll  nn=vp.size();
        ll l=0,j=0;
        for(ll i=1; i<=n; i++)
        {

            if(!bb[i])
            {
                if(l<nn)
                    ar[i]=vp[l++];
                else if(j<m)
                    ar[i]=v[j++];
            }
        }
        for(ll i=1; i<=n; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}


