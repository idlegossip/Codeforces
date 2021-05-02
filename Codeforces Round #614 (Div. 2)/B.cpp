#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
            ll n;
            cin>>n;
            double res=0.0;
            for(ll i=0;i<=100000;i++)
            {

                  if(n<=1)
                  {
                        res+=1.0;
                        break;
                  }
                  res+=double(1.0/n);
                  n--;
            }
            cout<<setprecision(10)<<fixed<<res<<endl;

}
