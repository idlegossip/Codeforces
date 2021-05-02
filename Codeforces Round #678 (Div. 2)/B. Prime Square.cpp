#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
ll ar[10000010];
void sive()
{
    ll i,j,k;
    for(i=2; i*i<=1e5; i++)
    {
        if(ar[i])
            continue;
        for(j=i+i; j<=1e5; j+=i)
            ar[j]=1;
    }
}
int main()
{
    ll t;
    cin>>t;
    memset(ar,0,sizeof(ar));
    sive();
    while(t--)
    {
        ll n,m;

        cin>>n;
        ll a;
        for(ll i=1; ; i++)
            if(!ar[n+i-1]&&ar[i])
            {
                a=i;
                break;
            }

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(i==j)
                    cout<<a<<" ";
                else
                    cout<<1<<" ";
            }
            cout<<endl;

        }

    }
    return 0;
}

