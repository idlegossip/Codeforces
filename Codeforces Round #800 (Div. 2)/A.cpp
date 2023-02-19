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
        ll a,b;
        string s="";
        cin>>a>>b;
        ll x=min(a,b);
        for(ll i=0;i<x;i++)
        {
            s+="0";
            s+="1";
        }
        a-=x;
        b-=x;
        if(a==0)
        {
            for(ll i=0;i<b;i++)
            s+="1";
        }
        else
         for(ll i=0;i<a;i++)
            s+="0";
        cout<<s<<endl;

    }
}
