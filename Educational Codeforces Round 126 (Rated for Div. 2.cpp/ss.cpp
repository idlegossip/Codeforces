

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    ll n,a,b;
    string s,s1;
    cin>>n;
    map<string,ll>mp;
    priority_queue<pair<ll,ll> >qn,qp,qn1,qp1;
    ll p;
    for(ll i=0; i<n; i++)
    {
        cin>>a>>p;
        if(a>0)
        {
            qp.push({-a,p});
        }
        else
            qn.push({a,p});
    }
    qn1=qn;
    qp1=qp;
    ll ans=0;
    ll f=1;
    while(1)
    {
        if(f)
        {
            if(qp.empty())
                break;
            auto x=qp.top();
            ans+=x.second;
            qp.pop();
            f=0;
        }
        else
        {
            if(qn.empty())
                break;
            auto x=qn.top();
            ans+=x.second;
            qn.pop();
            f=1;

        }
    }

    ll ans1=0;
    f=0;
    while(1)
    {
        if(f)
        {
            if(qp1.empty())
                break;
            auto x=qp1.top();
            ans1+=x.second;
            qp1.pop();
            f=0;
        }
        else
        {
            if(qn1.empty())
                break;
            auto x=qn1.top();
            ans1+=x.second;
            qn1.pop();
            f=1;

        }

    }
    cout<<max(ans,ans1)<<endl;
}



