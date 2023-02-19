#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        ll k,b,s;
        cin>>n>>k>>b>>s;
        ll las = s/k;
        ll re = (las*k - b*k);
        if(n==1)
        {
            if(las==b)
            {
                cout<<s<<'\n';

            }
            else
            {
                cout<<-1<<'\n';
            }
            continue;
        }
        a = ((b*k)+(k-1)*n) - s ;

        if(las<b or a<0)
        {
            cout<<-1<<'\n';
            continue;
        }
        else
        {
            ll x=(b*k);
            if(x+(k-1)<=s)
            {
                x+=(k-1);
            }
            else{
                x+=(s%k);
            }
            cout<<x<<" ";
            x=s-x;
            for(ll i=2;i<=n;i++)
            {
                if(x<=0)
                {
                    cout<<0<<" ";
                    continue;
                }
              if(x-(k-1)<0)
              {
                  cout<<x<<" ";
                  x=0;
                  continue;
              }
              cout<<k-1<<" ";
              x-=(k-1);

            }
        }
        cout<<'\n';


//        cin>>n;


//        for(ll i=1;i<=n;i++)
//        {
//            cin>>a;
//            v.push_back(a);
//        }

    }
}

