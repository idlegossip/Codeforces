#include<bits/stdc++.h>
using namespace std;
#define ll double
int main ()
{

    int t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll a;
       int n;
        cin>>n;
        map<ll,int>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll res=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                 a=double(llabs(-v[i]+v[j]))/2;
                 if(mp[a]==0)
                  res++;
                 mp[a]=1;
            }
        }
        cout<<res<<endl;


    }
    return 0;

}

