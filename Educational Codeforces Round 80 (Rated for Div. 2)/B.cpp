#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll l,r;
            cin>>l>>r;
            ll cnt=0;
            r++;
            while(r)
            {
                  r/=10;
                  cnt++;
            }
            cnt--;
            cout<<l*cnt<<endl;
      }
}
