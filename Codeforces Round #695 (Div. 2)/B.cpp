#include<bits/stdc++.h>
using namespace std;
#define ll long long
  vector<ll>v;
        ll n;
ll check1(ll ind)
{
    return ind-1>=0&&ind+1<n&&v[ind]>v[ind-1]&&v[ind]>v[ind+1];
}
ll check2(ll ind)
{
    return ind-1>=0&&ind+1<n&&v[ind]<v[ind-1]&&v[ind]<v[ind+1];
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
               v.clear();

        cin>>n;
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll res=0;
        ll hil[n+10];
        hil[0]=0;
        for(ll i=1; i<n-1; i++)
        {
            ll cnt=0;
            if((v[i-1]<v[i]&&v[i]>v[i+1])||(v[i-1]>v[i]&&v[i]<v[i+1]))
            {
                res++;
                hil[i]=1;
            }
            else
                hil[i]=0;

        }
        hil[n-1]=0;
        ll r=res;
        for(ll i=1; i<n-1; i++)
        {
            ll cnt=0;
            a=v[i];
            ll mn=min(v[i-1],v[i+1]);
            ll mx=max(v[i-1],v[i+1]);
            v[i]=mn;
            res=min(res,r-hil[i]-hil[i-1]-hil[i+1]+check1(i)+check1(i-1)+check1(i+1)+check2(i)+check2(i-1)+check2(i+1));
            v[i]=mx;
            res=min(res,r-hil[i]-hil[i-1]-hil[i+1]+check1(i)+check1(i-1)+check1(i+1)+check2(i)+check2(i-1)+check2(i+1));
             v[i]=a;
        }
        cout<<res<<endl;
    }
}

