#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      ll ar[]={0,1,3,6,10};
      while(t--)
      {
            ll n;
            cin>>n;
            ll a=n%10;
            ll res=(a-1)*10;
            ll cnt=0;
            while(n)
            {
                  n/=10;
                  cnt++;
            }
            res+=ar[cnt];
            cout<<res<<endl;


      }
      return 0;
}
