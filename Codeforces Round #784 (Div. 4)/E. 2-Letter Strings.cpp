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
        vector<string>v;
        string str;
        ll f=1;
        map<string,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>str;
            mp[str]++;
            if(mp[str]==1)
                v.push_back(str);

        }
        ll x=v.size();
        string s;
        map<string,ll>use;
        ll sum=0;
        for(ll i=0; i<x; i++)
        {
            s=v[i];
            ll z=s.size();
            ll c=mp[s];
            use.clear();
            for(ll j=0; j<z; j++ )
            {
                s=v[i];
                for(ll k=0; k<11; k++)
                {
                    char ch='a'+i;
                    s[j]=ch;
                    if(s==v[i]||use[s])
                        continue;
                    sum+=(mp[s]*c);
                    use[s]=1;

                }

            }
            mp[v[i]]=0;
        }
        cout<<sum<<endl;



    }
}






