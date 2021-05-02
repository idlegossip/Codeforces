#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        ll n;
        vector<ll>v;
        cin>>n;
        ll sum=0;
        for(ll i=0;i<n+2;i++)
        {
            cin>>a;
            sum+=a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll ind1=0,ind=0,f=0;
       for(ll i=0;i<n+1;i++)
       {
           if(sum-v[n+1]-v[i]==v[n+1])
           {
               f=1;
               ind1=n+1;
               ind=i;
           }
       }
       for(ll i=0;i<n+2;i++)
       {
           if(i==n)
            continue;
           if(sum-v[n]-v[i]==v[n])
           {
               f=1;
               ind1=n;
               ind=i;
           }
       }
       if(f)
       {
            for(ll i=0;i<n+2;i++)
            {
                if(i==ind||i==ind1)
                    continue;
                cout<<v[i]<<" ";
            }
       }
       else
        cout<<-1;

        cout<<endl;
    }
}
