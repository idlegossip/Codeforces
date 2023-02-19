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
        int n,k;
        cin>>n>>k;

        int a;
        int f = 0;
        vector<int>v;
        for(int i = 0; i < n; i++){
            cin>>a;
            if(a){
                f = 1;
            }
            v.push_back(a);
        }
        if(f){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }


    }
}

