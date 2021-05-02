#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            vector<ll>v;
            ll a,b,c;
            ll i,j,k,n;
            cin>>n;
            for(i=0;i<n;i++)

            {
                  cin>>a;
                  v.push_back(a);
            }
            reverse(v.begin(),v.end());
            for(i=0;i<n;i++)
            {
                 cout<<v[i]<<" ";
            }
            cout<<endl;

      }
      return 0;
}
