
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            string str;
            ll n;
            cin>>n;
            cin>>str;
            ll cnt=0;
            for(ll i=n-1;i>=0;i--)
            {
                  if(str[i]==')')
                        cnt++;
                        else
                              break;
            }
            if(cnt>(n-cnt))
                  cout<<"Yes"<<endl;
            else
                  cout<<"No"<<endl;
      }
      return 0;
}
