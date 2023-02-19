#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a;
        vector<int>v;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        ll ls = v[0];
        vector<int>ans;
        ans.push_back(ls);
        int f = 0;
         for(int i = 1; i < n; i++){
            if((ls -v[i]) > 0){
                f = 1;
               // cout<<v[i]<<' '<<ls<<' '<<f<<'\n';
            }
            ls = v[i] + ls;

            ans.push_back(ls);
        }

        if(f){
            cout<<-1<<'\n';
            continue;
        }
        for(int i = 0; i < n; i++){
            cout<<v[i]<<' ';
        }
        cout<<'\n';

    }
}

