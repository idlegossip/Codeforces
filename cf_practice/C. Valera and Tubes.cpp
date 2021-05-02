#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    ll i=0;
    ll f=1;
    ll cnt=0;
    ll f1=0,j=1;
    while(cnt<k-1)
    {
        i++;
        if(f)
        {
            for(j=1;j<=m;j++)
            {
                if(f1%2==0)
                    cout<<2<<" ";
                f1++;
               cout<<i<<" "<<j<<" ";
               if(f1%2==0)
               {
                   cnt++;
                   cout<<endl;
                   if(cnt==k-1)
                    break;
               }
            }
            if(cnt!=k-1)
            f=0;
        }
        else
        {
           for(j=m;j>=1;j--)
            {
                if(f1%2==0)
                    cout<<2<<" ";
                f1++;
               cout<<i<<" "<<j<<" ";
               if(f1%2==0)
               {
                   cnt++;
                   cout<<endl;
                   if(cnt==k-1)
                    break;
               }
            }
            if(cnt!=k-1)
            f=1;
        }
    }
    cout<<((n*m)-(2*(k-1)))<<" ";
    if(k!=1)
    {

        if(f)
        {
            j++;
            for( ;j<=m;j++)
               cout<<i<<" "<<j<<" ";
            f=0;
        }
        else
        {
            j--;
           for(;j>=1;j--)
               cout<<i<<" "<<j<<" ";
            f=1;
        }
    }
    while(1)
    {
        i++;
        if(i>n)
            break;
        if(f)
        {
            for(ll j=1;j<=m;j++)
               cout<<i<<" "<<j<<" ";
            f=0;
        }
        else
        {
           for(ll j=m;j>=1;j--)
               cout<<i<<" "<<j<<" ";
            f=1;
        }
    }
}
