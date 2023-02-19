#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,x2,x3;
        ll y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double ans=0;
        if(x1==x2&&x2==x3||(y1==y2&&y2==y3))
        {
            cout<<0<<endl;
            continue;
        }
        if(y1==y2&&y3<y1)
        {
            double  a=labs(x1-x2);
            double b=labs(y1-y2);
            ans=sqrt(a*a+b*b);
        }
       if(y1==y3&&y2<y1)
        {
             double  a=labs(x1-x3);
            double  b=labs(y1-y3);
            ans=sqrt(a*a+b*b);
        }
        if(y2==y3&&y1<y2)
        {
             double  a=labs(x3-x2);
             double  b=labs(y3-y2);
            ans=sqrt(a*a+b*b);
        }
        cout<<setprecision(10)<<fixed<<ans<<endl;

    }
}
