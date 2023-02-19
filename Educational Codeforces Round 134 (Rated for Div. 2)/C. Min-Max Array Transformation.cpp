
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
        vector<ll>v,v1,amn,amx,rem(n+1,-1);
        ll a;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }

        for(int i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        int up=-1;

        for(ll i=0; i<n; i++)
        {
            ll lw = lower_bound(v1.begin(),v1.end(),v[i])-v1.begin();
            int cnt=0;
            //cout<<up-1<<'u'<<endl;
            a=llabs(v[i]-v1[lw]);
            ll b = llabs(v[i]-v1[i]);
            a = min(a,b);
            amn.push_back(a);

            if(up<i)
            up=i;
            while(up+1<n and v[up+1]<=v1[up])
                up++;
            a = llabs(v[i]-v1[up]);
            amx.push_back(a);
            if(rem[up]==-1)
            rem[up]=i;

        }

        for(ll i=0; i<n; i++)
        {
            cout<<amn[i]<<' ';
        }
        cout<<'\n';
        for(ll i=0; i<n; i++)
        {
            cout<<amx[i]<<' ';
        }
        cout<<'\n';



    }
}
