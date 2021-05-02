#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,a,b,x,y;
        vector<ll>v;
        cin>>a>>b>>x>>y>>n;
        ll n1=n,a1=a,b1=b,x1=x,y1=y;
        ll d=(a-x);
        ll temp=min(d,n);
        ll mul=1;
        a-=temp;
        n-=temp;
        d=(b-y);
        temp=min(d,n);
        b-=temp;
        mul=a*b;

        d=(b1-y1);
        temp=min(d,n1);
        b1-=temp;
        n1-=temp;
        d=(a1-x1);
        temp=min(d,n1);
        a1-=temp;

        mul=min(a1*b1,mul);
        cout<<mul<<endl;
    }
    return 0;
}



