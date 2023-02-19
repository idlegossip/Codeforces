#include<bits/stdc++.h>
using namespace std;
using ll = long long ;



//        vector<ll>v;
//        for(ll i = 0;i<n;i++){
//            cin>>a;
//            v.push_back(a);
//        }
//        sort(v.begin(),v.end());

ll len(ll x)
{
    ll ln=0;
    while(x)
    {
        ln++;
        x/=10;
    }
    return ln;
}

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
        vector<ll>v,v1;
        multiset<ll>mst1,mst2,tm;
        for(ll i = 0; i<n; i++)
        {
            cin>>a;
            if(a!=1)
            mst1.insert(a);
        }
        for(ll i = 0; i<n; i++)
        {
            cin>>a;
            if(a!=1)
            mst2.insert(a);
        }
        ll ans=0;
        while(1)
        {
            vector<ll>temp;
            tm=mst1;
            ll f=0;
            for(auto x : tm)
            {
               // cout<<x<<'\n';
                if(mst2.find(x)!= mst2.end())
                {
                    mst2.erase(mst2.find(x));
                    mst1.erase(mst1.find(x));
                }
                else if(x>=10)
                {
                    f=1;
                    ans++;
                    a =len(x);
                    if(a>1)
                    temp.push_back(a);
                    mst1.erase(mst1.find(x));
                }
            }
            for(auto y : temp)
                mst1.insert(y);
            temp.clear();

            tm=mst2;
            for(auto x : tm)
            {
                if(mst1.find(x)!= mst1.end())
                {
                    mst2.erase(mst2.find(x));
                    mst1.erase(mst1.find(x));
                }
                else if(x>=10)
                {
                    f=1;
                    ans++;
                    a =len(x);
                    if(a>1)
                    temp.push_back(a);
                    mst2.erase(mst2.find(x));
                }
            }
            for(auto y : temp)
                mst2.insert(y);

             if(!f)
             {
                 ans+=(mst1.size())+(mst2.size());
                 break;
             }
            temp.clear();

        }
        cout<<ans<<'\n';


    }
}

