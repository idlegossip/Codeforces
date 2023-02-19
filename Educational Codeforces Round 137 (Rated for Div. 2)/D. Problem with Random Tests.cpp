///?? To begin with the name of almighty ALLAH.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1;
        cin>>s;
        vector<ll>pre(n+1),suf;
        s1 = s;
        int f = 0;
        int ls = 0, st = 0;
        int cnt = 0;
        if(s[0]=='1')
            cnt++;
        for(int i = 1; i < n; i++){
                if(s[i-1] != s[i]){
                    pre[i] = cnt;
                    cnt = 0;
                }
                else
                    cnt++;
        }
        for(int i = n-2; i >= 0; i--){
                if(s[i+1] != s[i]){
                    pre[i] = cnt;
                    cnt = 0;
                }
                else
                    cnt++;
        }
        if(!f){
            cout<<0<<'\n';
            continue;
        }
        int cnt = 0;
        for(int i = ls ; i  < n; i++){
            if(s1[st+cnt]=='1'){
                s[i] = '1';
            }
            cnt++;
        }
         f = 0;
        for(int i = st; i < n ; i++){
            if(s[i] == '1')
                f = 1;
            if(f){
                cout<<s[i];
            }
        }
        cout<<'\n';

//        int a;
//        vector<int>v;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }

    }
}

