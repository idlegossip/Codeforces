#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n ;
        cin>>n;
        string s;
        cin>>s;
        int mx = 0;
        for(int i = 0 ; i < n; i++){
            mx = max(mx,s[i]-'a');
        }
        cout<<mx+1<<"\n";
    }
}


