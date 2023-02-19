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
        vector<int>v(n+1);
        int f = 0;
        for(int i = 0; i < n; i++){
            cin>>v[i];
            if(!i and  v[i]== 1){
                f = 1;
            }
        }
        if(f){
            cout<<"Yes"<<'\n';
        }
        else{
            cout<<"No\n";
        }
    }
}
