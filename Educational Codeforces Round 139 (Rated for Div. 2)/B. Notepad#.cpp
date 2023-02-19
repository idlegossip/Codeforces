#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<string,int>mp;
        string s,tm = "";
        cin>>s;
        ll f = 0;

        for(int i =  0; i < n - 1; i++)
        {
            tm = s[i];
            tm += s[i+1];
            if(i and mp[tm] !=0 and mp[tm]!= i)
            {
                f = 1;
            }
            if(!mp[tm])
                mp[tm] = i+1;
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

