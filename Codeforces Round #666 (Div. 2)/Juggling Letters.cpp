#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,k;
        string str;
        cin>>n;
        map<ll,ll>mp;
        i=0;
        m=n;

        while(n--)
        {

            cin>>str;
            ll l=str.size();
            for(i=0; i<l; i++)
            {
                k=str[i]-'a';
                mp[k]++;
            }

        }
        ll f=1;
        for(i=0; i<26; i++)
        {
            if(mp[i]%m!=0)
            {
                f=0;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;

    }
}
