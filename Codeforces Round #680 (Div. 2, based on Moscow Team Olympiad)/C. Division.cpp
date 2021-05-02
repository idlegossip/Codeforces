
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[10000100]  ;
vector<ll>prime;
void sive()
{
    ll i,j,k;
    for(i=2; i*i<=1e7; i++)
    {
        if(ar[i])
            continue;
        for(j=i+i; j<=1e7; j+=i)
            ar[j]=1;
    }
    prime.push_back(2);
    for(i=3; i<=1e7; i+=2)
        if(!ar[i])
            prime.push_back(i);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sive();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ll a,x,f=0,ans=1;
        cin>>n>>m;
        if(n%m)
            cout<<n<<endl;
        else
        {
            vector<ll>div;
            a=m;
            for(ll i=0; i<prime.size()&&prime[i]*prime[i]<=m; i++)
            {
                if(m%prime[i]==0)
                {
                    div.push_back(prime[i]);
                    while(m%prime[i]==0)
                    {
                        m=m/prime[i];
                        if(m==1)
                            break;
                    }
                }
            }
            if(m!=1)
                div.push_back(m);
            m=a;
            for(ll i=0; i<div.size(); i++)
            {
                a=n;
                while(a%m==0)
                {
                    a/=div[i];
                }
                ans=max(a,ans);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
