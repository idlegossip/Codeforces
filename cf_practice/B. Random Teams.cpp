#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;

    ll a=n-m+1;
    ll b=n/m;
    ll r=n%m;
    ll rr=m-r;
    cout<<rr*((b*(b-1))/2)+(r*((b*(b+1))/2))<<" "<<(a*(a-1))/2<<endl;
}
