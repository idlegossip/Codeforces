///??To begin with the Name of Almighty ALLAH.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+7;
ll pw(ll val){
    ll cnt = 0;
    while(val % 2 == 0){
        val/= 2;
        cnt++;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a;
        vector<int>v;
        ll ans = 0;

        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
            ans += pw(a);
        }
        //cout<<ans<<'\n';
        if(ans >= n){
            cout<<0<<'\n';
            continue;
        }
        vector<ll>v1;
        for(int i = n; i >= 1; i--){
            a = pw(i);
            v1.push_back(a);
        }
        sort(v1.rbegin(),v1.rend());
        int op = 0;
        for(int i = 0; i <  n; i++){
             ans += v1[i];
             op++;
             if(ans >= n){
                break;
             }
        }
        if(ans < n ){
            cout<<-1<<'\n';
        }
        else{
            cout<<op<<'\n';
        }
    }
}

