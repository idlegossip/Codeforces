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
        string str;
        cin>>str;
        vector<ll>v(n+3),v1,v0;
        v[0]=0;
        ll f=0;
        ll last=0;
        ll op=0;
        for(ll i=0;i<n;i++)
        {
            if(str[i]=='(')
            {
                v1.push_back(0);
            }
            else
            {
                 v1.push_back(1);
            }
            ll x=v1.size();
            if(v1.size()>1&&v1[0]==v1[x-1])
            {
                op++;
                v1.clear();
                v[i+1]=0;
                f=0;
                last=i+1;
                continue;
            }
            if(f)
                continue;

            if(str[i]=='(')
            {
                v[i+1]=v[i]+1;
            }
            else
            {
                v[i+1]=v[i]-1;
            }
            if(v[i+1]<0)
            {
                f=1;
            }
            else if(v[i+1]==0)
            {
                last=i+1;
                op++;
                v1.clear();
                f=0;

            }


        }
        cout<<op<<" "<<n-last<<endl;
    }
}


