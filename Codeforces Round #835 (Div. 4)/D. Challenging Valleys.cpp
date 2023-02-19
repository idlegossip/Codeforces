
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
        vector<ll>v;
        ll a;
        for(int i = 0 ; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        int f = 1;
        int l = 0, r= n-1;
        for(int i = 0; i < n-1; i++){
            if(v[i]<v[i+1]){
                f= 0;
                break;
            }
            l = i+1;
        }
        if(f){
            cout<<"YES\n";
            continue;
        }
        f = 1;
        for(int i = n-1; i >=1; i--){
            if(v[i]<v[i-1]){
                f= 0;
                break;
            }
            r = i-1;
        }
       //cout<<l<<' '<<r<<'\n';
         if(f or l >= r){
            cout<<"YES\n";
            continue;
        }
        else{
            cout<<"NO\n";
        }


    }
}
