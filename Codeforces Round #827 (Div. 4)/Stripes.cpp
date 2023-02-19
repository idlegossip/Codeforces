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
        int n;
        string s[10];
        for(int i = 0; i < 8; i++) cin>>s[i];
        int r = 0, b = 0;
        for(int i = 0; i < 8; i++){
            if(s[i][0] == 'R'){
                    int f = 1;
                 for(int j = 1; j < 8; j++){
                    if(s[i][j] != s[i][j-1]){
                        f = 0;
                        break;
                    }
                 }
                 if(f){
                    r = 1;
                    break;
                 }
            }
        }
         for(int j = 0; j < 8; j++){
            if(s[0][j] == 'B'){
                    int f = 1;
                 for(int i = 1; i < 8; i++){
                    if(s[i-1][j] != s[i][j]){
                        f = 0;
                        break;
                    }
                 }
                 if(f){
                    b = 1;
                    break;
                 }
            }
        }
        if(r){
            cout<<'R'<<'\n';
        }
        else{
            cout<<'B'<<'\n';
        }


//        int a;
//        vector<int>v(n);
//        for(int i = 0;i < n; i++){
//            cin>>v[i];
//        }

    }
}

