#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{


    ll t;
    cin>>t;
    while(t--)
    {
        ll n,r,b;
        cin>>n>>r>>b;

        ll p = r/(b+1), q = r % (b+1);

        for(ll i = 0; i<q; i++) cout<<string(p+1, 'R')<<"B";
        for(ll i = q; i<b; i++) cout<<string(p, 'R')<<"B";

        cout<<string(p,'R')<<endl;




    }
}

