#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll n;
            string str,str1;
            cin>>n;
            cin>>str;
            cin>>str1;
            ll b=0,r=0;
            for(ll i=0;i<n;i++)
            {
                  if(str[i]>str1[i])
                        r++;
                  else if(str[i]<str1[i])
                        b++;
            }
            if(r>b)
                  cout<<"RED"<<endl;
            else if(b>r)
                  cout<<"BLUE"<<endl;
            else
                  cout<<"EQUAL"<<endl;
      }
      return 0;
}
