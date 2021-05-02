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
        cin>>n;
        string str;
        cin>>str;
        ll f=0;
        string s="2020";
        for(ll i=0;i<=4;i++)
        {
              string s1="";
              for(ll j=0;j<i;j++)
              {
                   char ch=str[j] ;
                   s1+=ch;
              }
               for(ll j=n-4+i;j<n;j++)
              {
                   char ch=str[j] ;
                   s1+=ch;
              }
              if(s1==s)
                  f=1;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

