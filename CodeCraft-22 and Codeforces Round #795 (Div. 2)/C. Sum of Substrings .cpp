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
        ll ev=0,od=0;
        ll a;
        ll n1=n-1;
        ll k1=k;
        ll cnt=0;
        ll anc=0;
        for(ll i=n-1; i>=0; i--)
        {
            if(str[i]=='1')
            {
                cnt++;
                if(k1>=0)
                {
                    k1-=(n1-i);
                    if(k1>=0)
                    {
                        anc++;
                        n1--;
                    }
                }
            }
        }
        ll ans=(11*(cnt-anc));
        if(cnt==n)
            ans=(11*(cnt-1));
        else if(anc)
            ans+=(11*(anc-1)+1);
        if(cnt-anc>0&&str[0]=='1')
            ans--;
        ll f=-1;
        k1 =0;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='1'&&(i<=k))
            {
                ans = min(ans,((cnt*11)-1));
                f=i;
                k1 = k-i;
                break;
            }
        }
        for(ll i=n-1; i>=0; i--)
        {
            if(f>=0&&f!=i&&str[i]=='1'&&(k1-(n-i-1)>=0))
            {
                ans= min(ans,(11*(cnt-1)));
            }
        }
        cout<<ans<<endl;



    }

}

