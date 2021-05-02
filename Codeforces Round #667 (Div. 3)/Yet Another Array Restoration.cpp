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
        cin>>n>>x>>y;
        a=1;
        ll i,j,k;
        ll d=abs(x-y) ;
        m=d;
        for(i=2; i<=min(d,n-1); i++)
        {
            if(d%i==0)
            {
                a=i;
            }
        }
        d=m/a;
        ll s=x;
        for(i=1; i<=n; i++)
        {
            cout<<s<<" ";
            s+=d;
            if(s>y)
                break;
        }
        while(i<n)
        {

            x-=d;
            if(x<1)
                break;
            cout<<x<<" ";
             i++;

        }
        while(i<n)
        {

            cout<<s<<" ";
            s+=d;
            i++;

        }
        cout<<endl;


    }
    return 0;
}



