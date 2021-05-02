#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n,k;
   cin>>n>>k;
   vector<ll>v;
   ll a;
   for(ll i=0;i<n;i++)
   {
      cin>>a;
      v.push_back(a);

   }
   sort(v.begin(),v.end());
   if(k==0)
   {
       if(v[0]==1)
        cout<<-1<<endl;
       else
        cout<<1<<endl;
       return 0;
   }
   ll f=0;
   if(k==0||v[k]==v[k-1])
    f=1;
    if(f)
        cout<<-1<<endl;
    else
        cout<<v[k-1]<<endl;
    return 0;

}
