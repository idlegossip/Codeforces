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
       string s;
       cin>>s;
       n=s.size();
       ll a=1;
       ll f=1;
       for(ll i=1;i<n;i++)
       {
           if(s[i]!=s[i-1])
           {
               if(a<2)
                f=0;
               a=1;
           }
           else
           a++;
       }
       if(a<2)
        f=0;

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }
}



