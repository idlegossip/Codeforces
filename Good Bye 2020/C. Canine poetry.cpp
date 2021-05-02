#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        ll n=str.size();
        ll res=0;
        map<ll,ll>mp;
        for(ll i=1; i<n; i++)
        {
            if(mp[i]||mp[i-1])
                continue;
            if(i+1<n&&str[i-1]==str[i]&&str[i-1]==str[i+1])
            {
                mp[i]=1;
                mp[i+1]=1;
                res+=2;
            }
            else if(str[i-1]==str[i])
            {
                mp[i]=1;
                res++;
            }
            else if(i+2<n&&str[i-1]==str[i+1]&&str[i+1]==str[i+2])
            {
                mp[i+1]=1;
                res++;
            }
            else if(i+2<n&&str[i-1]==str[i+1]&&str[i]==str[i+2])
            {
                mp[i+1]=1;
                mp[i+2]=1;

                res+=2;
            }
            else if(i+2<n&&str[i-1]==str[i+2]&&str[i]==str[i+1])
            {
                mp[i+1]=1;
                res++;
            }
            else if(i+1<n&&str[i-1]==str[i+1])
            {
                mp[i+1]=1;
                res++;
            }
        }
        cout<<res<<endl;

    }
}
