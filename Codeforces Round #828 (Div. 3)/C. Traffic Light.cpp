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
        char ch;
        cin>>n>>ch;
        string s;
        cin>>s;
        s+=s;
        n = 2*n;
        int f = 0;
        int cnt = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!f and s[i] == ch){
                f = 1;
                cnt = 0;
            }
            if(f and s[i] == 'g'){
                ans = max(ans,cnt);
                cnt = 0;
                f = 0;
            }
            if(f){
                cnt++;
            }
        }
        cout<<ans<<'\n';


//        int a;
//        vector<int>v;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}

