
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n;
      string str;
      cin>>n;
      cin>>str;
      ll cnt=0;
      ll mn=0;
      for(ll i=0;i<n;i++)
      {
            if(str[i]=='(')
                  cnt++;
            else
                  cnt--;
            mn=min(cnt,mn);
      }
      if(mn<-1||cnt!=0)
            cout<<"No"<<endl;
      else
            cout<<"Yes"<<endl;
      return 0;

}
