#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        ll pr[n+1];
        pr[0]=0;
        for(ll i=0;i<n;i++)
        {
            if(str[i]=='B')
            pr[i+1] = pr[i]+1;
            else
              pr[i+1] = pr[i];
        }
        ll mn = n+1;
        for(ll i=k;i<=n;i++)
        {
             ll a= k - (pr[i]- pr[i-k]);
             mn = min(mn,a);

        }
        cout<<mn<<endl;

    }
}



