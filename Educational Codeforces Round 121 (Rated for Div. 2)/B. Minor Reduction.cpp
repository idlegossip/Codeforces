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
        ll n;
        cin>>str;
        n=str.size();
        ll ind=-1;
        ll mx=-1;
        for(ll i=1; i<n; i++)
        {
            ll n1=str[i]-'0';
            ll n2=str[i-1]-'0';
            ll digit=n2*10+n1;
            if(9<n1+n2)
            {
                mx=n1+n2;
                ind=i-1;
            }

        }
        if(mx<10)
        {
            ll n1=str[0]-'0';
            ll n2=str[1]-'0';

            cout<<n1+n2;
            for(ll i=2; i<n; i++)
            {
                cout<<str[i];

            }
            cout<<endl;
        }
        else
        {
             for(ll i=0; i<ind; i++)
            {
                cout<<str[i];

            }
            cout<<mx;
            for(ll i=ind+2; i<n; i++)
            {
                cout<<str[i];

            }
            cout<<endl;

        }


    }
}

