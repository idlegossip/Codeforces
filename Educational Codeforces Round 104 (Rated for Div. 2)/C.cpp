#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2)
        {
            ll a=n/2;
            for(ll i=1; i<n; i++)
            {
                for(ll j=i+1; j<=n; j++)
                {
                    if(j+a<=n)
                        cout<<"1 ";
                    else
                        cout<<"-1 ";
                }
                a--;
            }
        }
        else
        {
            ll f,f1=-1;
            for(ll i=1; i<n; i++)
            {
                if(i%2)
                    f=1;
                  //  cout<<f1<<endl;
               if(f1==1)
                    f1=-1;
                else
                    f1=1;

                for(ll j=i+1; j<=n; j++)
                {
                    if(f)
                    {

                        cout<<"0 ";
                        f=0;
                        continue;
                    }
                    if(f1==-1)
                    {
                        cout<<"-1 ";
                        f1=1;

                    }
                    else
                    {
                        cout<<"1 ";
                        f1=-1;
                    }

                }
               // cout<<endl;
            }

        }
        cout<<endl;

    }
}

