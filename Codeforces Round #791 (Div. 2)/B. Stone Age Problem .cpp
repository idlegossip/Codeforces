#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

        ll n,q;
        cin>>n>>q;
        ll sum=0;
        ll ar[n+1];
        ll ind[n+1];
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
            ind[i]=0;
        }
        ll f,a,x=0,val=-1;
        ll j=0;
        while(q--)
        {
            cin>>f;
            j++;
            if(f==1)
            {
                cin>>a>>f;
                if(ind[a-1]<x)
                sum-=val;
                else
                    sum-=ar[a-1];
                sum+=f;
                ar[a-1]=f;
                ind[a-1]=j;
                cout<<sum<<endl;
            }
            else
            {
                cin>>a;
                sum=(a*n);
                val=a;
                x=j;
                cout<<sum<<endl;
            }
        }


    }


