#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        vector<ll>v1;
        ll a;
        ll f=1;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            v1.push_back(a);
        }
        if(n==2)
        {
            if(v[0]==v[1])
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
            continue;
        }
        ll prex[n+10];
        ll sufx[n+10];
        ll b=0;
        a=0;
        prex[0]=v[0];
        for(ll i=1; i<n; i++)
        {
            if(v[i]<v[i-1]||prex[i-1]<0)
            {
                prex[i]=-1;
            }
            else
            {
                a=v[i];
                v[i]-=v[i-1];
                prex[i]=v[i];
            }
        }
        if(v[n-1]==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        v=v1;
        sufx[n-1]=v [n-1];
        for(ll i=n-2; i>=0; i--)
        {
            if(v[i]<v[i+1]||  sufx[i+1]<0)
            {
                sufx[i]=-1;
            }
            else
            {
                v[i]-=v[i+1];
                sufx[i]=v[i];
            }
        }
        if(v[0]==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        f=1;

        for(ll i=0; i<n-1; i++)
        {
            if(i==0&&sufx[i+2]>=0)
            {
                a=v1[i];
                b=v1[i+1];
                swap(a,b);
                b-=a;
                if(sufx[i+2]==b)
                {
                    cout<<"YES"<<endl;
                    f=0;
                    break;
                }
            }
            if(i==n-2&&prex[i-1]>=0)
            {
                 a=v1[i];
                b=v1[i+1];
                swap(a,b);
                a-=prex[i-1];
                if(a==b)
                {
                    cout<<"YES"<<endl;
                    f=0;
                    break;
                }
            }
            if(i-1>=0&&i+2<=n-1&&sufx[i+2]>=0&&prex[i-1]>=0)
            {
                a=v1[i];
                b=v1[i+1];
                swap(a,b);
                if(prex[i-1]>a)
                    continue;
                a-=prex[i-1];
                if(a>b)
                    continue;
               b-=a;
                if(b==sufx[i+2])
                {
                    cout<<"YES"<<endl;
                    f=0;
                    break;
                }
            }
        }
        if(f)
            cout<<"NO"<<endl;

    }
}
