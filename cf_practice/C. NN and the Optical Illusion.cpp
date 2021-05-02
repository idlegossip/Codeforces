#include<bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
double pi = 2*acos(0.0)   ;
int main()
{
    ld n,x;
    cin>>n>>x;
    ld angle=(2*pi)/n;
    ld l=0.0000001,r=10000000.0;

    ld res=0;
    ld mid=0.0;
    for(ll i=0; i<=1000; i++)
    {
        mid=(l+r) /2.0;
        ld a=x+mid;
        ld b=4.0*mid*mid;
        a*=a;
        b=(2.0*a)-b;
        ld c=b/2.0*a;
        if(c<cos(angle))
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<mid<<endl;
    return 0;
}
