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
        cin>>n;
       vector<ll>v;
       ll f=1;
       ll a=1e9;
       ll x=1;
       v.push_back(1);
       for(ll i=1;i<n;i++)
       {
           x=x*2+x;
           if(x>a)
           {
               f=0;
               break;
           }
           v.push_back(x);


       }
       if(f)
       {
           cout<<"YES"<<endl;
           for(ll i=0;i<n;i++)
           {
               cout<<v[i]<<" ";

           }
           cout<<endl;
       }
       else
        cout<<"NO"<<endl;
    }
}

