#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        vector<ll>v,v1;
        ll l = n;
        for(int i = 0; i<n; i++){
            v.push_back(i+1);
        }
       for(int i = 1; i<= a; i++){
            v1.push_back(i);
        }
        for(int i = n-b; i> a; i--){
            v1.push_back(i);
        }
        for(int i = n-b+1; i<= n; i++){
            v1.push_back(i);
        }
        ll cnt = 0,cnt1 = 0;
        for(int i = 1; i<= n; i++){
            if(v[i-1]!=v1[i-1]){
                break;
            }
            cnt++;
        }
         for(int i = n; i>= 1; i--){
            if(v[i-1]!=v1[i-1]){
                break;
            }
            cnt1++;
        }
        if(cnt == a and cnt1==b){
            cout<<"YES\n";
        }
        else{
             cout<<"NO\n";
        }
    }
}
