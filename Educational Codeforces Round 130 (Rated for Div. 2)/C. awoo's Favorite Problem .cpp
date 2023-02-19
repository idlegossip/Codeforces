#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        ll f=1;
        vector<string>v;
        map<string,ll>mp;

        for(ll i=0; i<n; i++)
        {
            if(mp["bc"]&&s[i]=='a')
            {
                f=0;
                break;
            }
            if(mp["ab"]&&s[i]=='c')
            {
                f=0;
                break;
            }
            if(s[i]==s1[i])
                continue;
            string s2="";
            s2+=s[i];
            s2+=s1[i];
            if(s2=="ac"||s2=="ca")
                    f=0;
            if(s2=="ab")
            {
                v.push_back("ab");
                mp["ab"]++;
            }
            else if(s2=="bc")
            {
                v.push_back("bc");
                mp["bc"]++;
            }
            else if(s2=="ba")
            {
                mp["ab"]--;
                v.push_back("ba");
                if(mp["ab"]<0)
                    f=0;
            }
            else if(s2=="cb")
            {
                mp["bc"]--;
                v.push_back("cb");
                if(mp["bc"]<0)
                    f=0;
            }
        }

        if((mp["ab"]==0&&mp["bc"]==0)&&f||s==s1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
