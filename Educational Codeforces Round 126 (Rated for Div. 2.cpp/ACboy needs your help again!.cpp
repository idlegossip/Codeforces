#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    while(1)
    {
        ll n;
        cin>>n;
        if(!n)
            return 0;
        vector<ll>v;
        queue<pair<ll,ll> >q;
        ll a
        ll mx=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            mx=max(mx,a);
        }

        for(ll i=0; i<n; i++)
        {
            ll cnt=0;
            ll x,y;
            while(!q.empty()&&q.front().first>=v[i])
            {
                x=q.front().first;
                y=q.front().second;
                cnt+=y;
                q.pop();
                if(x==v[i])
                    mx=max(mx,(cnt+1)*x);
                else
                    mx=max(mx,cnt*x);

            }
            q.push({v[i],cnt+1});
        }
        while(!q.empty())
        {
            x=q.front().first;
            y=q.front().second;
            cnt+=y;
            q.pop();
            mx=max(mx,cnt*x);

        }
        cout<<mx<<endl;


    }

}
