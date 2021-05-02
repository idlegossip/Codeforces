#include<bits/stdc++.h>
using namespace std;
#define ll long  long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll a,b,c;
            cin>>a>>b>>c;
            ll sum=a+b+c;
            ll m=min(a,min(b,c));
            if(sum%9==0&&m>=sum/9)
                  cout<<"YES"<<endl;
            else
                  cout<<"NO"<<endl;
      }
      return 0;
}
