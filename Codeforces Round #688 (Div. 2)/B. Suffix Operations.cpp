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
        vector<ll>v(n+10);
        ll res=0,mx=0,a=0,b;
        for(ll i=0; i<n; i++)
            cin>>v[i];
        mx=llabs(v[1]-v[0]);
        mx=max(mx,llabs(v[n-1]-v[n-2]));
        for(ll i=1; i<n; i++)
        {
            //v[i]+=a ;
            b=llabs(v[i]-v[i-1]);
            res+=b;
            if(i==n-1)
                  continue;
            mx=max(mx,(llabs(v[i]-v[i-1])+llabs(v[i+1]-v[i])-llabs(v[i+1]-v[i-1]))) ;
           // a=a+(ta-v[i]);

        }
        cout<<res-mx<<endl;
    }
    return 0;
}
