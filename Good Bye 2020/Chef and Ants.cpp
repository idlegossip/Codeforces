#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp;
        ll a;
        ll n,m;
        cin>>n;
        ll res=0;
        set<ll>st;
        vector<ll>v[n+10];
        for(ll i=0; i<n; i++)
        {
            cin>>m;
            priority_queue<ll>qp;
            priority_queue<ll>qn;
            for(ll j=0; j<m; j++)
            {
                cin>>a;
                if(a<0)
                    qn.push(a);
                else
                    qp.push(-a);
                a=llabs(a);
                mp[a]++;
            }
            ll sz=0;
            ll sz1=0;
            while(sz<qp.size()&&sz1<qn.size())
            {
                a=qp.top();
                ll b=qn.top();
                if(a==b)
                {
                    res+=m-sz-sz1-2;
                    sz++;
                    sz1++;
                }
                else
                {
                    res+=m-sz-sz1-1;
                    sz++;
                    sz1++;
                }
            }
            if(qp.empty())
            {
                while(!qn.empty())
                {
                    v[i].push_back(llabs(qn.top()));
                    qn.pop();
                }
            }
            else if(qn.empty())
            {
                while(!qp.empty())
                {
                    v[i].push_back(llabs(qp.top()));
                    qp.pop();
                }
            }
        }
        map<ll,ll>use;
        for(ll i=0; i<n; i++)
        {
            ll sz=v[i].size();
            for(ll j=0; j<sz; j++)
            {
                ll a=v[i][j];
                //  cout<<a<<"   "<<mp[a]<<" "<<j<<"  "<<res<<endl;
                if(mp[a]>1)
                {
                    res+=(sz-j-1) ;
                }
                // cout<<res<<endl;
                if(use[a]==0&&mp[a]>1)
                    res++;
                use[a]=1;
            }
        }

        cout<<res<<endl;
    }
    return 0;
}
