#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,u,r,d,l;
        cin>>n>>u>>r>>d>>l;
        ll a=0,b=0,c=0,x=0;
        ll f=1;
        if(n==u)
        {
            b++;
            x++;
            if(b>r||x>l)
                  f=0;

        }
        else if(n-1==u)
        {
             if(r>0)

        }
        if(n==r)
        {
            a++;
            c++;
        }

        if(n==c)
        {
            b++;
            x++;
        }
        if(n==l)
        {
            a++;
            c++;
        }
        if(a>u||c>d||b>r||x>l)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

