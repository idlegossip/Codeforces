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
        ll n;
        string s,ss = "Yes";
        cin>>s;
        n = s.size();

        int f = 1;
        if(s[0]==ss[0] ){
            ll l = 0;
            for(int i = 0 ; i < n;i++){
                if(s[i] != ss[l] ){
                    f = 0;
                    break;
                }
                l++;
                l %= 3;
            }
        }
        else  if(s[0]==ss[1] ){
            ll l = 1;
            for(int i = 0 ; i < n;i++){
                if(s[i] != ss[l] ){
                    f = 0;
                    break;
                }
                l++;
                l %= 3;
            }
        }
        else  if(s[0]==ss[2]){
            ll l = 2;
            for(int i = 0 ; i < n;i++){
                if(s[i] != ss[l] ){
                    f = 0;
                    break;
                }
                l++;
                l %= 3;
            }
        }
        else
            f = 0;
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }



//        vector<ll>v;
//        ll a;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}

