#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod=1e9+7;
int main()
{
       ll n,m,p;
       cin>>n>>m>>p;
       ll res=1;
       for(ll i=1;i<n;i++)
       {
             res*=i;
             res%=mod;

       }
       cout<<res<<endl;
    return 0;
}

