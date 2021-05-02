
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,k;
        cin>>n;
        vector<ll>v;
        ll a;
        unsigned long long res=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        if(n>=3)
        {
            for(i=0; i<n; i++)
            {
                res+=(v[i]-1);
            }
            cout<<res<<endl;
        }


    }
}
