#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        vector<ll>v,v1;
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
        ll sum=0;
        ll c,b;
        for(ll i=0;i<n-1;i++)
        {
            c=llabs(v[i]-v[i+1])+llabs(v1[i]-v1[i+1]);

            b=llabs(v[i]-v1[i+1])+llabs(v1[i]-v[i+1]);
            sum+=min(b,c);
            if(b<c)
            {
                swap(v1[i+1],v[i+1]);
            }


        }
        cout<<sum<<endl;




    }
}

