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
            ll l;
            cin>>l;
            cin>>str;
            ll ans=0;
            ll cnt=0;
            for(ll i=0;i<l;i++)
            {
                  if(str[i]=='1')
                        cnt++;
                  else
                  {
                    if(cnt)
                         ans+=(cnt-1);
                    cnt=0;
                  }

            }
            ll mx=ans;
            cnt=0;
            ans=0;
            for(ll i=0;i<l;i++)
            {
                  if(str[i]=='0')
                        cnt++;
                  else
                  {
                    if(cnt)
                         ans+=(cnt-1);
                    cnt=0;
                  }

            }

            cout<<max(ans,mx)<<endl;
      }
      return 0;
}
