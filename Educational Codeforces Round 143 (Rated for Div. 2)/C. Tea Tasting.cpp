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
        ll a;
        vector<ll>v,v1,pre(n+1,0),pre1(n+1,0),ans(n+1,0);
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        for(int i = 0; i < n ; i++)
        {
            pre[i] = v1[i];
            if(i)
                pre[i] += pre[i-1];
        }
        for(int i = 0; i < n ; i++)
        {
            ll l = i, r = n - 1;
            ll  f = - 1;
            while(l <= r )
            {
                ll mid = (l+r)>>1;
                ll dif = pre[mid];
                if(i)
                    dif -= pre[i-1];
                if(dif <= v[i])
                {
                    f = mid;
                    l = mid+1;
                }
                else
                {
                    r = mid-1;
                }
            }
            if(f > -1)
            {
                pre1[i]++;
                pre1[f+1]--;
                ll dif = pre[f];
                if(i)
                    dif-=pre[i-1];
                dif = v[i] - dif;
                //cout<<dif<<' '<<f<<'\n';
                ans[f+1] += dif;
            }
            else
            {
                ans[i] += min(v1[i],v[i]);
            }
            // cout<<f<<' '<<ans[i]<<'\n';
        }
        for(int i = 0; i < n; i++)
        {
            if(i)
                pre1[i] += pre1[i-1];
            ans[i] += (pre1[i] * v1[i]);
            cout<<ans[i]<<' ';
        }
        cout<<'\n';

    }
}

