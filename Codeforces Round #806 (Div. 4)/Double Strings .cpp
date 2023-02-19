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
        vector<string>v;
        cin>>n;
        ll cnt=0;
        map<string,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>str;
            v.push_back(str);
            mp[str]=1;
        }
        string ans = "";
        for(ll i=0;i<n;i++)
        {
            str= v[i];
            ll x= str.size();
            ll f=0;
            string s="";
            for(ll j=x-1;j>=0;j--)
            {
                s+=str[j];
                reverse(s.begin(),s.end());
                str.pop_back();
               // cout<<s<<  "  ts  "<<str<<endl;

                if(mp[s]==1 and mp[str]==1)
                    f=1;
                reverse(s.begin(),s.end());
            }
            if(f)
                ans+='1';
            else
                ans+='0';
        }
        cout<<ans<<endl;


    }
}


