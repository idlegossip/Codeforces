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
        int a,b,c;
        cin>>a>>b>>c;
        int f = 0;
        if(a+b ==c){
            f=1;
        }
         if(a+c ==b){
            f=1;
        }
         if(c+b ==a){
            f=1;
        }
        if(f){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }

//        int a;
//        vector<int>v(n);
//        for(int i = 0;i < n; i++){
//            cin>>v[i];
//        }

    }
}

