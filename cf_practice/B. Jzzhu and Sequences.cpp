#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll r=1e9+7;
int main()
{
    ll a,b;
    ll n;
    cin>>a>>b;
    cin>>n;
    if(a>b)
    {
        ll mod=n%6;
        if(mod==0)
        {
            cout<<abs(b-a)%r<<endl;
        }
        else
        {
            ll c=-a,d=-b;
            if(mod%3==0)
                cout<<(2*r+b-a)%r<<endl;
            else if(mod==4)
                cout<<(r+c)%r<<endl;
            else if(mod==5)
                cout<<(r+d)%r<<endl;
            else if(mod==1)
                cout<<(r+a)%r<<endl;
            else
                cout<<(r+b)%r<<endl;
        }
    }
    else
    {
        ll mod=n%6;
        if(mod==0)
        {
            cout<<(2*r+a-b)%r<<endl;
        }
        else
        {
            ll c=-a,d=-b;
            if(mod%3==0)
                cout<<abs(b-a)%r<<endl;
            else if(mod==1)
                cout<<(r+a)%r<<endl;
            else if(mod==2)
                cout<<(r+b)%r<<endl;
            else if(mod==4)
                cout<<(c+r)%r<<endl;
            else
                cout<<(d+r)%r<<endl;
        }
    }
    return 0;
}
