
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
        ll x1,x2,x3;
        ll y1,y2,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        ll f = 0;
        if(x1 == x2 and y1 == y3)
            f = 1;
        if(x1 == x3 and y1 ==y2)
            f = 1;
        if(x2 == x3 and y1 ==y2)
            f = 1;
        if(x2 == x1 and y2 ==y3)
            f = 1;
        if(x3==x1 and y3==y2)
            f =1 ;
        if(x3==x2 and y3==y1)
            f=1;

        if(f)
        {
            cout<<"NO"<<'\n';
        }
        else
        {
            cout<<"YES\n";
        }



    }
}

