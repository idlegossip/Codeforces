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
        string s;
        cin>>s;
        vector<ll>v;
        ll f = 0;
        ll f1 = 0;
        ll cnt = 1;
        for(int i = 0; i < n-1; i++){
           if(i and s[i-1] != s[i]){
                cnt = i+1;
           }
           cout<<cnt<<' ';
        }
        cout<<'\n';
    }

}
