
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k,a,b;
        vector<ll>v;
        cin>>n;
        map<ll,ll>mp;
        map<ll,ll>mp1;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll res=LONG_LONG_MIN;
        for(i=0; i<=5; i++)
        {
            a=1;
            for(k=0; k<i; k++)
            {
                a*=v[k];
            }
            for(j=n-1; j>=n-5+i; j--)
            {
                a*=v[j];
            }
            res=max(res,a);
        }

        cout<<res<<endl;
    }
    return 0;
}
