#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        ll sum=0;
        for(ll i=0;i<4;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum==4)
            cout<<2<<endl;
        else if(sum==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
}
