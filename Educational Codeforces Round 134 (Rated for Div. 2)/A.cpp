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


        string str[2];
        char ch;
        map<ll,ll>mp;
        int cnt=0;
        for(int i=0;i<4;i++)
        {
            cin>>ch;
            if(mp[ch]) continue;
            cnt++;
            mp[ch]=1;

        }
        cout<<cnt-1<<'\n';
//        vector<ll>v;
//        ll a;
//        for(int i=0;i<n;i++)
//        {
//            cin>>a;
//            v.push_back(a);
//        }

    }
}
