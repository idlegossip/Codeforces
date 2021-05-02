#include<bits/stdc++.h>
using namespace std;
int dx[]= {0,0,1,-1};
int dy[]= {-1,1,0,0};

#define ll long long
ll mx=1e18;
int main()
{
    ll i,j,k;
    ll n,m;
    cin>>n;
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        cin>>k;
        v.push_back(k);

    }
    sort(v.begin(),v.end());
    ll mn=1e16;
    for(i=0; i<=100000; i++)
    {
        unsigned long long mul=i;
        ll sum=v[0]-1;
        for(k=1; k<n&&mul<mx; k++)
        {
            sum+=llabs(mul-v[k]);
            mul*=i;
        }
        if(k==n)
            mn=min(mn,sum);
        else
            break;
    }
    cout<<mn<<endl;
    return 0;
}

