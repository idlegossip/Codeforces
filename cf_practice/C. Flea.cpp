#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,s,x,y,a,b;
    cin>>n>>m>>s;
    x=n%s;
    y=m%s;
    a=n/s;
    b=m/s;
    if(!x)
        x=s;
    else
        a++;
    if(!y)
        y=s;
    else
        b++;
    cout<<a*b*x*y<<endl;
    return 0;

}
