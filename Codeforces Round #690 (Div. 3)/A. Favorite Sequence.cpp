#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        vector<ll>v(n+10);
        vector<ll>v1(n+10);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll j=0,k=n-1;
         for(ll i=0; i<n; i++)
        {
              if(i%2==0)
            cout<<v[j++]<<" ";
            else
             cout<<v[k--]<<" ";

        }
        cout<<endl;


    }
    return 0;
}

