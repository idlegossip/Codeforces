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
        vector<ll>v[n+10];
        ll cnt=8;
        cout<<9;
        for(ll i=1; i<n; i++)
        {

            cout<<cnt;
              cnt++;
              cnt=cnt%10;
        }
        cout<<endl;

    }
}
