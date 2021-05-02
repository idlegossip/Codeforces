#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x1,x2,x3,x4;
    ll y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2;
    ll f=0;
    if(x1==x2)
    {
        x3=x1+abs(y1-y2);
        y3=y1;
        x4=x2+abs(y1-y2);
        y4=y2;

    }
    else if(y1==y2)
    {
        x3=x1;
        y3=y1+abs(x1-x2);
        x4=x2;
        y4=y2+abs(x1-x2);
    }
    else
    {
       x3=x1;
       y3=y2;

       x4=x2;
       y4=y1;

       if(abs(x1-x3)+abs(y1-y3)!=abs(x1-x4)+abs(y1-y4))
            f=1;
    }
    if(f)
        cout<<-1<<endl;
    else
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
}
