#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

      ll n;
      ll t;
      cin>>t;
      while(t--)
      {
         ll a,b,c,d;
      cin>>a>>b>>c>>d;
      ll r1=c-d,r2=c+d;
      if(b<a)
            swap(a,b);
      if(r1>r2)
            swap(r1,r2);
      if(r1>=b||r2<=a)
      {
            cout<<abs(b-a)<<endl;
            continue;
      }
      if(r1<a)
      {
            r1=a;
      }
      if(r2>b)
            r2=b;
      cout<<(abs(b-a)-abs(r2-r1))<<endl;
      }




}
