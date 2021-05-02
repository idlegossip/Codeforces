#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    ll n,cnt=0;
    vector<ll>v;
    cin>>n;
    if(n%2==0)
    {
        for(ll i=1; i<=n/2; i+=2)
        {
            v.push_back(i);
            if(n-i+1!=i+1)
            {
                v.push_back(n-i+1);
                cnt+=(n-i+1);
            }
            cnt+=i;
        }

    }
    else if(n%4==3)
    {
        for(ll i=1; i<=n/4; i++)
        {
            v.push_back(i);
            cnt+=i;
        }
        for(ll i=n-(n/4); i<=n; i++)
        {
            v.push_back(i);
            cnt+=i;
        }
    }
    else
    {
      for(ll i=1; i<=(n/4)+1; i++)
        {
            v.push_back(i);
            cnt+=i;
        }
        for(ll i=n-(n/4)+1; i<=n; i++)
        {
            v.push_back(i);
            cnt+=i;
        }
    }

    t=abs(((n*(n+1))/2)-cnt);
    cout<<abs(t-cnt)<<endl;

    cout<<v.size()<<" ";
    for(ll i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;

}
