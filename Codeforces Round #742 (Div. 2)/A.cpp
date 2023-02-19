#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       string str;
       cin>>n>>str;
       for(ll i=0;i<n;i++)
       {
           if(str[i]=='L'||str[i]=='R')
            cout<<str[i];
           else if(str[i]=='D')
           cout<<"U";
           else
            cout<<"D";


       }
       cout<<endl;
    }
}
