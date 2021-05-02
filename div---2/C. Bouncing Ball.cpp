#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,p,k,x,y,a,b;
        cin>>n>>p>>k;
        string str;
        cin>>str;
        cin>>x>>y;
        ll mn=INT_MAX;
        ll ind=0;
        ll cnt[n+10];
        memset(cnt,-1,sizeof(cnt));
        for(ll i=n; i>=1; i--)
        {
            ll j=i;
              if(cnt[i]!=-1)
                  continue;
              ind=0;
            while(j>=1)
            {
                  if(str[j-1]=='0')
                       ind++;
                  cnt[j]=ind;
                  j-=k;
            }
        }
         for(ll i=p; i<=n; i++)
         {
             a=((i-p)*y)+ cnt[i]*x;
             mn=min(mn,a);
         }
        cout<<mn<<endl;
    }
    return 0;
}
