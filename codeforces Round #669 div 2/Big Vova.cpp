
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll a,ll b)
{
    return (b == 0) ? a:GCD(b,a%b);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        vector<ll>res;
        ll n,m,i,j=0,k=0;
        cin>>n;
        ll a,b=0,c=0;

        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            if(a>b)
            {
                k=i;
                b=a;
            }
        }
        ll gcd=b;
        map<ll,ll>mp ;
        res.push_back(b);
        mp[k]=1;
        for(i=0; i<n; i++)
        {
            b=0;
            for(j=0; j<n; j++)
            {
                if(mp[j])
                    continue;
                a=GCD(gcd,v[j]);
                if(a>b)
                {
                    b=a;
                    k=j;
                }
            }
            gcd=b;
            res.push_back(v[k]);
            mp[k]=1;
        }
        for(j=0; j<n; j++)
        {
            cout<<res[j]<<" ";
        }
        cout <<endl;

    }
    return 0;
}
