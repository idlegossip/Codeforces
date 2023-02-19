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
        ll m;
        cin>>n>>m;
        ll sum=0;
        for(ll i=1;i<=m;i++)
            sum+=i;
       // sum+=(n*m);
        ll las=m;
       // cout<<las<<endl;
        for(ll i=1;i<n;i++)
        {
            las+=m;
            sum+=las;
        }
        cout<<sum<<endl;
    }
}
