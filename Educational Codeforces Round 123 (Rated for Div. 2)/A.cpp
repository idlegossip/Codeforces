#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        string s="";
        ll ind=0,ind1=0;
        ll f=0;
        for(ll i=0; i<6; i++)
        {
            if(str[i]=='B')
                ind=i;
            if(str[i]=='b')
                ind1=i;

        }
        if(ind1>ind)
            f=1;
        for(ll i=0; i<6; i++)
        {
            if(str[i]=='R')
                ind=i;
            if(str[i]=='r')
                ind1=i;

        }
        if(ind1>ind)
            f=1;
        for(ll i=0; i<6; i++)
        {
            if(str[i]=='G')
                ind=i;
            if(str[i]=='g')
                ind1=i;

        }
        if(ind1>ind)
            f=1;
            if(f)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
    }
}
