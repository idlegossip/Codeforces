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
        string str;

        cin>>n;
         vector<ll>v(n+1),v1(n+1);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll a;
        for(ll i=0;i<n;i++)
        {
            cin>>a>>str;
            for(ll j=0;j<a;j++)
            {
                if(str[j]=='D')
                {
                    v[i]++;
                    v[i]%=10;
                }
                else
                {
                    v[i]--;
                    if(v[i]<0)
                    v[i]+=10;
                    v[i]%=10;
                }
            }



        }
        for(ll i=0;i<n;i++) cout<<v[i]<<" \n"[i==n-1];


    }
}


