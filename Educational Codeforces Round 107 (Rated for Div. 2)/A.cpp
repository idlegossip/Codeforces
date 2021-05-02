#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll res=0;
       ll n,a;
       cin>>n;
       for(ll i=0;i<n;i++)
       {
           cin>>a;
           if(a==1||a==3)
            res++;

       }
       cout<<res<<endl;
   }
}

