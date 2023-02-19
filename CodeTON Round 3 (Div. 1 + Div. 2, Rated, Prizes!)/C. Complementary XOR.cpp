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
        string s,s1;
        int n;
        cin>>n;
        cin>>s>>s1;
        int f = 1, f1= 1;
        for(int i = 0; i < n; i++){
            if(s[i] != s1[i]) f = 0;
            if(s[i] == s1[i]) f1 = 0;
        }
        if(f1 == f){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            if(f1){

            }

        }

    }
}
