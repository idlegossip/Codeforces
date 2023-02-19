#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,w;
    string s;
    cin>>s;
    cin>>w;
    n = s.size();
    for(int i = 0; i < n; i+=w){
        cout<<s[i];
    }
}
