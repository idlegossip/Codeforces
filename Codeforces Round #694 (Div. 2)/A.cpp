#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        vector<ll>v;
        string str;
        ll a;
        ll res=0,res1=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            res+=a/m;
            if(a%m)
                res++;
        }
        //sort(v.begin(),v.end());
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            a=v[i];
            if(a%m)
            {
                sum+=a;
                if(sum%m==0)
                {
                    res1+=sum/m;
                    sum=0;
                }
            }
            else
                res1+=a/m;

        }
        if(sum)
        {
              res1+=sum/m;
              if(sum%m)
                  res1++;

        }
        cout<<res1<<" "<<res<<endl;



    }
}
