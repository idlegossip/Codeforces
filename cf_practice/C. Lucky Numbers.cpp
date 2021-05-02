#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n;
      cin>>n;
      ll sum=1;
      ll res=0;
      for(ll i=0;i<n;i++)
      {
            sum*=2;
            res+=sum;
      }
      cout<<res<<endl;
      return 0;
}
