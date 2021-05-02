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
            cin>>n;
             if(n<=3)
                  cout<<n-1<<endl;
             else if(n%2)
                  cout<<3<<endl;
             else
                  cout<<2<<endl;
      }
      return 0;
}
