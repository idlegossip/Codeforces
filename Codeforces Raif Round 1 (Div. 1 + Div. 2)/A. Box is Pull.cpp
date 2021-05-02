#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,x2,y1,y2;
        ll d;
        cin>>x1>>y1>>x2>>y2;
        d=abs(x1-x2)+abs(y1-y2);
        if(x1!=x2 &&y1!=y2)
            d+=2;
        cout<<d<<endl;
    }
    return 0;
}
