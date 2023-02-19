#include<bits/stdc++.h>
using namespace std;
#define ll long long
 vector<ll>v,v1;
 ll fmx(ll n)
 {
     ll mx=-1e15;
        for(ll i=0;i<n;i++)
        mx=max(mx,v[i]);
        return mx;


 }

 ll fmn(ll n)
 {
     ll mx=1e15;
        for(ll i=0;i<n;i++)
        mx=min(mx,v[i]);
        return mx;


 }


 ll fprime(ll n)
 {
     ll mx=0;
     ll f;
        for(ll i=0;i<n;i++)
        {
            if(v[i]==1)
                continue;
            f=1;
            for(ll j=2;j*j<=v[i];j++)
            {
                if(v[i]%j==0)
                {
                    f=0;
                    break;
                }
            }
            if(f)
                mx++;
        }
        return mx;

 }



 ll div(ll n)
 {
     ll mx=0;
     ll nm=0;
     ll f;
        for(ll i=0;i<n;i++)
        {
            f=0;
            for(ll j=1;j*j<=v[i];j++)
            {
                if(v[i]%j==0)
                {
                    if(v[i]/j==j)
                        f++;
                    else
                    f+=2;
                }
            }
            if(mx<f)
                mx=f,nm=v[i];
            else if(mx==f)
            {
                nm=max(nm,v[i]);

            }

        }
        return nm;

 }

 ll pal(ll n)
 {
     ll mx=0;
     for(ll i=0;i<n;i++)
     {
         vector<ll>vv;
         ll a=v[i];
         ll l=0;
         while(a)
         {
             l++;
             vv.push_back(a%10);
             a/=10;

         }
         ll f=1;
         for(ll k=0;k<(l+1)/2;k++)
         {
             if(vv[k]!=vv[l-k-1])
             {
                 f=0;
                 break;
             }
         }
         if(f)
            mx++;
     }
     return mx;
 }


int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        ll a;
        ll mat[n+1];
        ll sum=0,sum1=0;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        cout<<"The maximum number : "<<fmx(n)<<endl;
        cout<<"The minimum number : "<<fmn(n)<<endl;
        cout<<"The number of prime numbers : "<<fprime(n)<<endl;
        cout<<"The number of palindrome numbers : "<<pal(n)<<endl;
        cout<<"The number that has the maximum number of divisors : "<<div(n)<<endl;



    }
//    ll n;
//    string s;
//    ll a,b;
//    vector<ll>v;
//    ll sum=0;
//    cin>>n;
//    a=0,b=1;
//    ll mn=1e9,mx=-1e7;
//    ll ind=0,ind1=0;
//    ll f=1;
//    for(ll i=0; i<n; i++)
//    {
//        cin>>a;
//        v.push_back(a/2);
//        if(a%2)
//            f=0;
//    }
//    ll ans=0;
//    while(f)
//    {
//        ans++;
//        for(ll i=0; i<n; i++)
//        {
//            if(v[i]%2)
//            {
//                f=0;
//                break;
//            }
//            v[i]/=2;
//
//        }
//
//    }
//    cout<<ans<<endl;

}
