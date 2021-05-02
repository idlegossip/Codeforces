#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,o;
    vector<ll>v[5];
    ll a,b,c;
    cin>>n>>m>>o;
    ll mx1=0,mx2=0,mx3=0;
    ll mn1=LONG_LONG_MAX;
    ll mn2 =LONG_LONG_MAX;
    ll mn3=LONG_LONG_MAX;
    ll sum1=0,sum2=0,sum3=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v[1].push_back(a);
        sum1+=a;

    }
    for(ll i=0; i<m; i++)
    {
        cin>>a;
        v[2].push_back(a);
          sum2+=a;
    }
    for(ll i=0; i<o; i++)
    {
        cin>>a;
        v[3].push_back(a);
          sum3+=a;
    }
    ll ans;
    sort(v[1].begin(),v[1].end());
    sort(v[2].begin(),v[2].end());
    sort(v[3].begin(),v[3].end());
    mn1=v[1][0];
    mn2=v[2][0];
    mn3=v[3][0];
    mx1=v[1][n-1];
    mx2=v[2][m-1];
    mx3=v[3][o-1];
    a=sum1-mn1;
     b=sum2-mn2;
     c=sum3-mn3;
    ans=sum1+max(b-mn2+c-mn3,max(sum2-sum3,sum3-sum2));
    ans=max(ans,sum2+max(a-mn1+c-mn3,max(sum1-sum3,sum3-sum1)));
    ans=max(ans,sum3+max(b-mn2+a-mn1,max(sum2-sum1,sum1-sum2)));
    cout<<ans<<endl;

    /*ll s=min(mn1,min(mn2,mn3));

    ll k,l;
    if(s==mn1)
    {
          k=2,l=3;
    }
    if(s==mn2)
    {
          k=1,l=3;
    }
     if(s==mn3)
    {
          k=1,l=2;
    }
        */




}
