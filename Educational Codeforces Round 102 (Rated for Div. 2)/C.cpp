#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        ll a;
        a=n%k;
        ll m=k;

        for(ll i=1; i<=k; i++)
        {
            if(i<k-a)
                cout<<i<<" ";
            else
            {

                cout<<m<<" ";
                m--;
            }
        }
        cout<<endl;

    }
}


