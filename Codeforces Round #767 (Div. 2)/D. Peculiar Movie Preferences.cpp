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
        ll n;
        cin>>n;
        map<string,ll>mp;
        ll f=0;
        for(ll i=0; i<n; i++)
        {
            cin>>str;
            ll x=str.size();
            if(x==1)
            {
                f=1;
            }
            else if(x==2)
            {
                reverse(str.begin(),str.end()) ;
                if(mp[str])
                    f=1;
                reverse(str.begin(),str.end()) ;
                if(str[0]==str[1])
                    f=1;

            }
            else
            {
                string s="" ;
                for(ll i=2; i>=1; i--)
                    s+=str[i];
                reverse(str.begin(),str.end()) ;
                if(mp[s]==1||mp[str]==1)
                    f=1;
                string s1="";
                reverse(str.begin(),str.end()) ;
                for(ll i=0; i<=1; i++)
                    s1+=str[i];

                if(str[0]==str[2])
                    f=1;
                mp[s1]=3;
            }
            mp[str]=1;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
