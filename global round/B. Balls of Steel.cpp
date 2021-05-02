#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct point
{
    ll ind,x,y,l;
    point(ll x_,ll y_,ll i_)
    {
        x=x_;
        y=y_;
        ind=i_;
        l=x_+y_;
    }

};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        vector<point>v;
        ll x1,y1;
        cin>>n>>k;
        for(ll i=0; i<n; i++)
        {
            cin>>x1>>y1;
            v.push_back(point(x1,y1,i));
        }
        ll cnt=0;
        ll mx=0;
        for(ll i=0; i<n; i++)
        {
            ll cnt=0;
            for(ll j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                ll sum=abs(v[i].x-v[j].x)+abs(v[i].y-v[j].y);
                if(sum<=k)
                    cnt++;
            }
            mx=max(cnt,mx);
        }
        if(mx<n-1)
            cout<<-1<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}

