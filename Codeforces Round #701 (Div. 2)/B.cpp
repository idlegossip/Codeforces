#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,k;
    cin>>n>>t>>k;
    ll ar[n+10];
    for(ll i=1; i<=n; i++)
        cin>>ar[i];
    ll pr[n+10];
    pr[1]=0;
    pr[2]=(ar[2]-ar[1]-1);

    for(ll i=3; i<n; i++)
    {
        pr[i]=pr[i-1]+(ar[i+1]-ar[i-1]-2);
    }
      pr[n]=pr[n-1];

    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll x,y;
        cout<<(pr[r]-pr[l+1])+(ar[l+1]-2)+(k-ar[r-1]-1)<<endl;

    }
}
