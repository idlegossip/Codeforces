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
            string str1;
            ll i,j,k;
            ll n;
            cin>>n;
            cin>>str>>str1;
            vector<ll>v;
            for(i=0;i<n;i++)
            {
                  if(str[i]!=str1[i])
                        v.push_back(i);
            }
            if(v.size()>2||v.size()==1)
                  cout<<"NO"<<endl;
            else if(v.size()==2)
            {
                   swap(str1[v[0]],str[v[1]]);
                  if(str==str1)
                        cout<<"YES"<<endl ;
                  else
                        cout<<"NO"<<endl;

            }
            else
                  cout<<"YES"<<endl;
      }
      return 0;
}
