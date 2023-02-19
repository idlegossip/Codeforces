///??To begin with the Name of Almighty ALLAH.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+7;
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
        int a;
        vector<int>v;
        map<int,int>mp;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        string s;
        cin>>s;
        int f = 1;
        for(int i = 0; i < n; i++){
             a = s[i];
             if(mp[v[i]]){
                if(mp[v[i]] != a){
                    f =  0;
                }
             }
             else
                mp[v[i]] = a;
        }
        if(f){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}

