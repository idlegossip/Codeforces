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
        vector<ll>v(n+1);
        string str;
        cin>>str;
        string s="";
        ll f=1;
        map<ll,ll>mp;

        for(ll i=0; i<n; i++)
        {
            if(mp.size()==0&&str[i]=='W')
                continue;
            if(str[i]=='W')
            {
                if(mp['R'-'a']==0||mp['B'-'a']==0)
                    f=0;
                mp.clear();

            }
            else
                mp[str[i]-'a']=1;

        }

        if(mp.size()!=0)
        {
           if(mp['R'-'a']==0||mp['B'-'a']==0)
                    f=0;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}





