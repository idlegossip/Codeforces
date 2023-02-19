
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll a;
        ll f=0;
        cin>>n;
        vector<ll>v;
        vector<pair<ll,ll> >v1,v2;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            if(a%2)
            v1.push_back({a,i});
            if(a%2==0)
                 v2.push_back({a,i});


        }
        sort(v1.begin(),v1.end());
         sort(v2.begin(),v2.end());
        for(ll i=1; i<v1.size(); i++)
        {
           if(v1[i-1].second>v1[i].second)
           {
               f=1;
               break;
           }

        }
        for(ll i=1; i<v2.size(); i++)
        {
           if(v2[i-1].second>v2[i].second)
           {
               f=1;
               break;
           }

        }
        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }
}



