#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll res=1;
        for(ll i=0; i<n; i++)
        {
            a=v[i];
            if(mp[a]==1)
                v[i]=a+1,mp[a+1]=1;
            mp[a]=1;
        }
        for(ll i=1; i<n; i++)
        {
            a=v[i];
      //  cout<<a<<"     ";
            if(a!=v[i-1])
                res++;
        }
        cout<<res<<endl;


    }
    return 0;

}


