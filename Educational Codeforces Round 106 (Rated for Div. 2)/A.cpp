#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll k1,k2,n;
            cin>>n>>k1>>k2;
            ll a,b;
            cin>>a>>b;
            ll f1=n-k1;
            ll f2=n-k2;
            k1+=k2;
            f1+=f2;
            if(k1/2>=a&&f1/2>=b)
            {
                  cout<<"Yes"<<endl;
            }
            else
                  cout<<"No"<<endl;

      }
}
