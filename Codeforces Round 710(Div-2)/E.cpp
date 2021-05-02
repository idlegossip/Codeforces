#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>res,res1,q;
        priority_queue<ll,vector<ll>,greater<ll> >p;
        priority_queue<ll>p1;
        map<ll,ll>mp;
        ll n,a;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            q.push_back(a);
        }
        ll last=0;
        for(ll i=0;i<n;i++)
        {
            a=q[i];
            if(mp[a])
            {
                a=p.top();
               res.push_back(a);
                a=p1.top();
                res1.push_back(a);
                p.pop();
                p1.pop();
            }
            else
            {
                mp[a]=1;
                res.push_back(a);
                res1.push_back(a);
                for(ll i=last+1;i<a;i++)
                {
                    p.push(i);
                }
                for(ll i=a-1;i>last;i--)
                {
                    p1.push(i);
                }
                last=a;
            }
        }
        for(ll i=0;i<n;i++)
            cout<<res[i]<<" ";
        cout<<endl;
         for(ll i=0;i<n;i++)
            cout<<res1[i]<<" ";
        cout<<endl;

    }
}
