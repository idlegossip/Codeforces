#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

       ll n,q;
       cin>>n>>q;
       vector<ll>v;
        vector<ll>p(n+1,0),s(n+1,0);
        ll a;
        for(ll i=0;i<n;i++)scanf("%lld",&a),v.push_back(a);
        for(ll i=1;i<n;i++)
        {
            p[i+1]=p[i];
            if(v[i]<v[i-1])
                p[i+1]+=(v[i-1]-v[i]);
                //cout<<p[i+1]<<" ";
        }
        for(ll i=n-2;i>=0;i--)
        {
            s[i+1]=s[i+2];
            if(v[i]<v[i+1])
                s[i+1]+=(v[i+1]-v[i]);
        }
        ll b;
        while(q--)
        {
            scanf("%lld %lld",&a,&b);
           //a--,b--;
            if(a<=b)
            {
                cout<<(p[b]-p[a])<<'\n';
            }
            else
            {
                cout<<(s[b]-s[a])<<'\n';
            }

        }

}

