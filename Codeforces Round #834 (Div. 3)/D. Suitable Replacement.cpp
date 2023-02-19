#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,s1;
    cin>>s>>s1;
    int n = s.size();
    int sz = s1.size();
    map<int,int>mp,mp1;
    vector<ll>v;
    for(int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        if(s[i]=='?')
        {
            v.push_back(i);
        }
    }
    ll l = 0;
    for(int i = 0; i < sz; i++)
    {
        mp1[s1[i]]++;
    }
    ll n1 = v.size();
    while(mp['?'])
    {
        for(int i = 'a'; i <='z'; i++)
        {
            if(mp[i] < mp1[i])
            {
                ll r = mp1[i] - mp[i];
                mp[i] = 0;
                while(r > 0 and l < n1)
                {
                    s[v[l]] = char(i);
                    l++;
                    r--;
                    mp['?']--;
                }
            }
            else if(mp1[i])
            {
                mp[i] -= mp1[i];
            }
        }
    }
    cout<<s<<'\n';
}
