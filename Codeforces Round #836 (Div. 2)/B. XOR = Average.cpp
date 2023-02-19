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
       cin>>n;
       if(n==1){
        cout<<1<<'\n';
        continue;
       }
       if(n % 2==0){
          cout<<1<<' '<<3<<' ';
          for(int i = 3; i <= n; i++){
            cout<<2 << ' ';
          }
       }
       else{
        for(int i = 1; i <= n; i++){
            cout<<1 << ' ';
          }
       }
       cout<<'\n';

    }
}


