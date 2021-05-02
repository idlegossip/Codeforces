#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   ll t;
   cin>>t;
   while(t--)
   {
       ll res=0;
       ll n,a,b,c,aa,bb;
       ll x,y,z=1;
       cin>>a>>b>>c;
       x=1;
       y=1;
       aa=a,bb=b;
       while(a>1)
       {
           a--;
           x*=10;
       }
        while(b>1)
       {
           b--;
           y*=10;
       }
       if(min(aa,bb)==c)
       {
           cout<<x<<" "<<y<<endl;
       }
       else
       {
          while(c>1)
       {
           c--;
           z*=10;
       }
       if(x<=y)
        y+=z;
       else
        x+=z;
       cout<<x<<" "<<y<<endl;

       }


   }
}


