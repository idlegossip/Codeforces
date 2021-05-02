#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        vector<ll>v;
        string str;
        ll a;
        cin>>n>>m;
        queue<pair<ll,ll> >q ;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            q.push({a,1});
        }
        // sort(v.begin(),v.end());

        ll res=0;
        ll f=1;
        pair<ll,ll>p;
        while(!q.empty())
        {
            p=q.front();
            //cout<<a<<" ";
            a=p.first;
            ll nm=p.second;
            q.pop();
            res+=(nm*a);
            //cout<<a<<" "<<nm<<endl;
            if(f)
            {
                if(a%m==0)
                {
                    a/=m;
                    q.push({a,nm*m});
                }
                else
                    f=0;

            }

        }
        cout<<res<<endl;


    }
}


