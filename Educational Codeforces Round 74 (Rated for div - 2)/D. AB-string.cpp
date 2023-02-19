#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n ;
    string s;
    cin>>n;
    cin>>s;
    vector<int>la(n+1),lb(n+1);
    ll ans = 0;
    //cout<<la[0]<<' '<<lb[0]<<'\n';
    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            if(i){
               lb[i] = lb[ i - 1];
               la[i] = la[ i - 1];
            }
            ans += (i - la[i]+1);
            //cout<<'a'<<' '<<(i - la[i] + 1)<<'\n';
            la[i] = i + 1;
        }
        else{
            if(i){
                lb[i] = lb[ i - 1];
                la[i] = la[ i - 1];
            }
            ans += (i - lb[i] + 1);
           // cout<<'b'<<' '<<(i - lb[i] + 1)<<'\n';
            lb[i] = i + 1;
        }
    }
    la[n-1] = n - 1;
    lb[n-1] = n - 1;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'A'){
            if(i + 1< n){
               lb[i] = lb[ i + 1];
               la[i] = la[ i + 1];
            }
            ans += ((la[i] - i) >= 1 ? (la[i] - i)-1 : 0);
            //cout<<'a'<<' '<<(la[i] - i + 1)<<'\n';
            la[i] = i - 1;
        }
        else{
            if(i + 1 < n){
                lb[i] = lb[ i + 1];
                la[i] = la[ i + 1];
            }
            ans += ((lb[i] - i) >= 1 ? (lb[i] - i)-1 : 0);
           //cout<<'b'<<' '<<(lb[i] - i + 1)<<'\n';
            lb[i] = i - 1;
        }
    }
   // ans -= n;
    cout<<(1LL * (n*(n+1))/2) - ans<<'\n';

}
