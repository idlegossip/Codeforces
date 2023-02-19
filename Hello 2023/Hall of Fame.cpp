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
        string s;
        cin>>s;
        ll f= 0,f1 = 0;
        ll ind = 0;
        for(int i = 1; i < n; i++){
                if(s[i]=='L' and s[i-1]=='R') f1= 1,f= 1;
                 if(s[i]=='R' and s[i-1]=='L' and !f) ind = i,f = 1;


        }
        if(!f){
                cout<<-1<<'\n';

        }
        else if(f1){
            cout<<0<<'\n';
        }
        else{
            cout<<ind<<'\n';
        }


//        vector<ll>v;
//        ll a;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}

