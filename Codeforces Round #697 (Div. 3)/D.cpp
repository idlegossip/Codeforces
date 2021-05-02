#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define P pair<int,int>
#define fi first
#define se second
#define MP make_pair

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>vp1;
        vector<ll>vp2;
        vector<ll>v;
        ll a,m,n;
        cin>>n>>m;
        ll cnt=0,b;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            cnt+=a;
        }
        ll sum=0,sum1=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            b=v[i];
            if(a==1)
                vp1.pb(b) ;
            else
                vp2.pb(b),sum1+=b;
        }
        if(cnt<m)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(vp1.rbegin(),vp1.rend());
        sort(vp2.rbegin(),vp2.rend());
        ll res=LONG_LONG_MAX;
        cnt=0;
        a=0;
        n=vp2.size();
        for(ll i=0; i<=vp1.size(); i++)
        {
            while(n>0&&sum+sum1-vp2[n-1]>=m)
            {
                n--;
                sum1-=vp2[n];
            }
            if(sum1+sum>=m)
                res=min(res,i+(n*2));
            if(i!=vp1.size())
                sum+=vp1[i];
        }
        cout<<res<<endl;



    }
}
