#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        ll ans=0;
        n=2*n-1;
        ll l=0,x=(n+1)/2,r=n;
        ll a=n-x;
        ll sum1=a*(a+1)/2;
        ll sum2=x*(x+1)/2;
        while(l<=r)
        {
            ll mid=(l+r)/2;

            if(mid>x)
            {
                ll rem=a-(mid-x);
                ll sum=rem*(rem+1)/2;
                sum=sum2+(sum1-sum);
                if(sum<s)
                {
                    ans=mid;
                    l=mid+1;
                }
                else
                    r=mid-1;
            }
            else
            {
                ll sum=(mid*(mid+1))/2LL;
                if(sum<s)
                {
                    ans=mid;
                    l=mid+1;
                }
                else
                    r=mid-1;

            }

        }
        if(ans<n)
            ans++;
        cout<<ans<<'\n';

    }
}


