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
        n-=k;n+=3;
        if(n%2)
        {
            cout<<1<<" "<<n/2<<" "<<n/2<<" ";
            for(ll i=3;i<k;i++)
                cout<<1<<" ";
            cout<<endl;

        }
        else if(n%4==0)
        {
              cout<<n/2<<" "<<n/4<<" "<<n/4<<" ";
            for(ll i=3;i<k;i++)
                cout<<1<<" ";
            cout<<endl;
        }
        else
        {
              cout<<2<<" "<<n/2-1<<" "<<n/2-1<<" ";
            for(ll i=3;i<k;i++)
                cout<<1<<" ";
            cout<<endl;
        }

    }
}
