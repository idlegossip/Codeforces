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
        ll n,m;
        cin>>n>>m;
        string s,s1;
        cin>>s>>s1;
        reverse(s1.begin(),s1.end());
        s+=s1;
        ll a;
        vector<ll>v;
        n+=m;
        ll f= 0;
        for(int i = 0; i < n-1; i++){
           if(s[i] ==s[i+1])
            f++;
        }
        if(f <= 1)
            cout<<"YES\n";
        else{
            cout<<"NO\n";
        }
    }
}

