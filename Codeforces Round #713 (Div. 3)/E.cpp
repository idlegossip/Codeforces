#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>res;
        ll n,l,r,s;
        cin>>n>>l>>r>>s;
        ll k=r-l+1;

        ll a=(k*(k+1))/2;
        ll b=(k*(2*n-k+1))/2;
          map<ll,ll> mp;
        if(s<a||s>b)
            cout<<-1<<endl;
        else
        {

            for(ll i=n; i>=1; i--)
            {
                if((k*(2*i-k+1))/2>=s&&(k*(k-1))/2<=s-i)
                {
                    res.push_back(i);
                    s-=i;
                    k--;
                    mp[i]=1;
                    if(!k||!s)
                      break;
                }
            }
            a=0;
            for(ll i=1; i<=n; i++)
            {
                if(mp[i])
                    continue;
                a++;
                if(a==l)
                    break;
                mp[i]=1;
                cout<<i<<" ";
            }
            for(ll i=0; i<res.size(); i++)
                cout<<res[i]<<" ";
            for(ll i=1; i<=n; i++)
            {
                if(mp[i])
                    continue;
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
