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
        cin>>str;
        ll cnt=0;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            if(mp[str[i]]==0)
                cnt++;
                mp[str[i]]=1;
                cnt++;

        }
        cout<<cnt<<endl;


    }
}

