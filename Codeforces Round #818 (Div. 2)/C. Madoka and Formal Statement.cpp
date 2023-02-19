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
        cin>>n;
        vector<int>v(n+1),v1(n+1);
        for(int i = 0; i < n; i++) cin>>v[i];
        for(int i = 0; i < n; i++){
            cin>>v1[i];
        }
        int f = 1, ls = 0;
        for(int i = 0; i < n; i++){
                if(v[i]>v1[i]){
                    f = 0;
                    break;
                }
            if(v[i] != v1[i] and i+1 < n and (v1[i] - 1) > v1[i+1] ){
               f = 0;
               break;
            }
            else if(i + 1 == n and v[i] != v1[i] and (v1[i] - 1) > v1[0] ) {
                    f = 0;
            }
        }
        if(f){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}
