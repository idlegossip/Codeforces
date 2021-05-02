#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp;
        ll a;
        ll n;
        cin>>n>>a;
        ll x;
        if(n%2==0)
        {
            x=a%n;
            if(x==0)
                x=n;
            cout<<x<<endl;


        }
        else
        {
            ll y=n/2;
            // y++;
            if(a<=y)
            {

                cout<<a<<endl;
                continue;
            }
            x=((a-y-1)/y);
            x++;
            x+=a;
            x%=n;
            if(x==0)
                x=n;
            cout<<x<<endl;
        }




    }
}

