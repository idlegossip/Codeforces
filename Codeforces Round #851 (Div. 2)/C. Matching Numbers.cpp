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
        if(n%2==0){
            cout<<"No\n";
            continue;

        }
          cout<<"Yes\n";

        vector<pair<ll,ll> >v;
        ll a = 2 * n;
        for(int i = (n+1)/2; i >= 1; i--){
           cout<<a<<' '<<i<<'\n';
            a--;
        }
        for(int i =n; a > n; i--){
           cout<<a<<' '<<i<<'\n';
            a--;
        }
    }
}

