#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    vector<ll>v;
    ll x=2050;
    v.push_back(x);
    for(ll i=0;i<=15;i++)
    {
        x*=10;
        v.push_back(x);
    }
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=0;
        //cout<<v.size()<<endl;
        for(ll i=v.size()-1;i>=0;i--)
        {
            while(n>=v[i])
            {
                n-=v[i];
                a++;
            }
        }
        if(n==0)
        {
            cout<<a<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
