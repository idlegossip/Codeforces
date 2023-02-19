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
        ll ev=0,od=0;
        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                ev++;
            else
                od++;

        }
        cout<<min(ev,od)<<endl;

    }

}
