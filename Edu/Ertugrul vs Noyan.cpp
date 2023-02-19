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
        ll a;
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            sum^=a;
        }
        if(sum>0)
            cout<<"ERTUGRUL"<<endl;
        else
            cout<<"NOYAN"<<endl;

    }
}
