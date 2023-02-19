

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,w;
    cin>>n;
    if(n < 3){
        cout<<-1<<'\n';
    }
    else{
            ll a = 2 * 3;
            ll b = 3 * 5;
            ll c = 2 * 5;
        cout<<a<<'\n';
         cout<<b<<'\n';
          cout<<c<<'\n';
          for(int  i = 3 ; i < n; i++){
            cout<<(a * 2LL)<<'\n';
            a *= 2LL;
          }

    }
}
