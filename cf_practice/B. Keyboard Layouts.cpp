#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll r=1e9+7;
int main()
{
    ll a,b;
    ll n;
    string str1,str2,str3;
    cin>>str1>>str2>>str3;

    n=str3.size();
    ll d='a'-'A';
    map<char,char>mp;
    for(ll i=0; i<26; i++)
    {
        mp[str1[i]]=str2[i];
    }
    for(ll i=0; i<n; i++)
    {
        if(str3[i]<'a'&&str3[i]>='A')
        {
            cout<<char((mp[str3[i]+32])-d);
        }
        else  if(str3[i]>='A')
            cout<<mp[str3[i]];
        else
            cout<<str3[i];

    }
    cout<<endl;


    return 0;
}
