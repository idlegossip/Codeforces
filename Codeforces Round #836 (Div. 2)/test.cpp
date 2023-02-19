#include<bits/stdc++.h>
using  namespace std;
#define ll long long
const ll N = 1e4;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        string s,s1;
        cin>>s;
        s1 = s;
        reverse(s.begin(),s.end());
        s1 += s;
        cout<<s1<<'\n';

    }
}

