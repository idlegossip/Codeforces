
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
        vector<ll>v,v1;
        ll a,b;
        ll inf=1e18;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
         for(ll i=0;i<n;i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        ll in1=0,in2=0,in3=0,in4=0;
        ll ans=(llabs(v[0]-v1[0]))+(llabs(v[n-1]-v1[n-1]));
        for(ll i=0;i<n;i++)
        {
            a=llabs(v[i]-v1[0]);
            if()


        }
        ll sum=0;
        for(ll i=0;i<n;i++)
        {

          sum+=min(llabs(vp[i].first-vp[i].second.first),llabs(vp[i].first-vp[i].second.second));
        }
        cout<<sum<<endl;
        cout<<min(sum,ans)<<endl;
    }
}
