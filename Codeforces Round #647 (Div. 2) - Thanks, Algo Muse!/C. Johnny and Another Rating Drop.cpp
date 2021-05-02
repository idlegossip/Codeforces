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
            cin>>n;
            ll res=0,cnt=1,a=0,cur=0;
           while(powl(2,a)<=n)
           {
                 cnt=powl(2,a);
                 a++;
                ll b=(cnt-cur);
                 res+=a;
                 res+=1*(b/2);
                 if(b<4&&b>2)
                  res+=1;
                 res+=2*(b/4);
                 if(b<4&&b>1)
                  res+=2;
                 res+=3*(b-2)/4;
                 cur=cnt;
           }
           if(cnt<n)
           {
               ll b=(n-cnt);
                if(b<4&&b>1)
                  res+=2;
                   if(b==3)
                  res+=1;
                 res+=1*(b /2);
                 res+=2*(b                                                                                                               /4);
                 res+=3*(b-2)/4;
           }
           cout<<res<<endl;


      }
}
