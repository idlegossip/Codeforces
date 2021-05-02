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
            ll l=n-1;
           sort(str.begin(),str.end());
            cout<<str<<endl;

      }
      return 0;
}
