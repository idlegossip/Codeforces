#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector<ll>v,v1;
ll dp[110][2][30000];
ll mn=1e9,mn1=1e9;
ll x,y;
void knap(ll ind,ll f,ll s,ll s1)
{
    if(ind>n)
        return;
    if(ind==n)
    {
        if((s*s)+(s1*s1)<mn)
        {
            x=s;
            y=s1;
            mn=(s*s)+(s1*s1);

        }
        return;
    }
    if(dp[ind][f][s]!=-1)
        return;
    knap(ind+1,0,s+v[ind],s1+v1[ind]);
    knap(ind+1,1,s+v1[ind],s1+v[ind]);
    dp[ind][f][s]=1;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));

        cin>>n;

        v.clear();
        v1.clear();
        ll a;
        ll sum1=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            sum1+=((n-2)*(a*a));
            v.push_back(a);
        }


        for(ll i=0; i<n; i++)
        {
            cin>>a;
            sum1+=((n-2)*(a*a));
            v1.push_back(a);

        }


        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        mn=1e9;
          mn1=1e9;
        knap(0,0,0,0);
        cout<<sum1<<" "<<mn<<" "<<mn1<<endl;

        cout<<sum1+(x*x+y*y)<<endl;

    }
}



