#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;

        cin>>x>>n;
        ll a=x;
        if(x%2==0&&n%2||x>n)
        {
            cout<<-1<<endl;
            continue;
        }
        ll sum=0;
        vector<ll>v;
        ll i=0;
        v.push_back();
        while(a)
        {
            if(a%2)
            {
              ll b=1<<i;
              v.push_back(b)  ;
            }
            a/=2;
            i++;
        }
       sort(v.rbegin(),v.rend());
       for(ll i=0;i<v.size();i++)
       {
           cout<<v[i]<<endl;
              ans+=(n/v[i]);
              n=n%v[i];
              if(n==0)
                break;
       }
       cout<<ans<<endl;

    }
}

