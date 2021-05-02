#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            string str,res="";
            ll n;
            cin>>n;
            cin>>str;
            ll a,b;
            ll ch=str[0]-'0';

            for(ll i=0;i<n;i++)
            {
                a=str[i]-'0';
                b=a+1;
                if(ch==2&&a==1)
                {
                      res+='0';
                      ch=1;
                }
                else if(ch==1&&a==1)
                {
                      res+='1';
                      ch=2;
                }
                else if(a==0&&ch==1)
                {
                   res+='0';
                   ch=0;
                }
                else if(ch==0&&a==1)
                {
                      res+='1';
                      ch=2;
                }
                else
                {
                      res+='1';
                      ch=1;
                }

            }
            cout<<res<<endl;

      }
}

