
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,a,b,x,y,s;
        ll l=0;
        cin>>n>>x;
        m=n;
        ll sum=0;
        vector<ll>v;
        while(n)
        {
            a=n%10;
            sum+=(n%10);
            v.push_back(a);
            n/=10;
            l++;
        }
        reverse(v.begin(),v.end());
        if(sum<=x)
        {
            cout<<"0"<<endl;
        }
        else
        {
            n=m;
            ll mul=1;
            sum=0;
            ll i;
            ll f=1;
            ll mov=0;
            for( i=0; i<l; i++)
            {
                sum+=v[i];
                if(sum>=x)
                {
                     mov+=(powl(10,(l-i-1)))*v[i];
                    // cout<<mov<<" ";
                     mul*=10;
                }
            }
            cout<<llabs(mul-mov)<<endl;

        }

    }
    return 0;
}



