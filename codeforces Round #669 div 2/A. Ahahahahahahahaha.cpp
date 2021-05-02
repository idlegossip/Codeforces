#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        vector<ll>oi;
        vector<ll>ni;
        ll n,m,i,j=0,k=0;
        cin>>n;
        ll a,b=0,c=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            if(a%2==0)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        if(b>=c)
        {
            cout<<b<<endl;
            for(i=0; i<b; i++)
            {
                cout<<0<<" ";
            }
        }
        else if(b<c)
        {
            if(c%2==0)
            {
                cout<<c<<endl;
                for(i=0; i<c; i++)
                {
                    cout<<1<<" ";
                }
            }
            else
            {
                if(c>n/2)
                {
                    cout<<c-1<<endl;
                    for(i=0; i<c-1; i++)
                    {
                        cout<<1<<" ";
                    }
                }
                else
                {
                  cout<<c<<endl;
                    for(i=0; i<c-2; i++)
                    {
                        cout<<1<<" ";
                    }
                    if(v[n-1]==0)
                    {
                          cout<<"1 0";
                    }
                    else
                    {
                       cout<<"0 1";
                    }
                }

            }

        }
        cout<<endl;
    }
    return 0;
}
