#include<bits/stdc++.h>
using namespace std;
#define ll long long
 ll q[1000010];
int main()
{
    string str;
     ll k;
    cin>>k;
    cin>>str;
    ll n=str.size();

    ll pr[n+10];
    pr[0]=0;
    for(ll i=0;i<n;i++)
    {
        pr[i+1]=pr[i]+(str[i]=='1' ? 1:0 );
        //cout<<pr[i+1]<<" ";
    }
    ll ans=0;
    q[0]=1;
    for(ll i=0;i<n;i++ )
    {
        ll a=pr[i+1]-k;
        if(a>=0)
            ans+=q[a];
        q[pr[i+1]]++;
    }
    cout<<ans<<endl;

}
