#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll rb=0,ra=0 ;
ll mn=LONG_LONG_MAX;
ll n,sum=0;
vector<ll>v(110);
int main()
{
    cin>>n;
    for(ll i=0; i<n; i++)
        cin>>v[i],sum+=v[i];
    ll f[n+10];
    f[n]=0;
    for(ll i=n-1; i>=0; i--)
    {
        f[i]=abs(v[i]-f[i+1]);
    }
    cout<<(sum-f[0])/2<<" "<<(sum+f[0])/2<<endl;
    return 0;

}
