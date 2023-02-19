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
        string s;
        cin>>s;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            vector<int>v(10,0);
            int mx = 0;
            int dis = 0;
            for(int j = i; cnt <= 100 and j < n; j++){
                v[s[j]-'0']++;
                mx= max(mx, v[s[j]-'0']);
                if( v[s[j]-'0']==1){
                    dis++;
                }
                if(dis >= mx){
                    ans++;
                }
                cnt++;
            }
        }
        cout<<ans<<'\n';



//        vector<int>v;
//        int a;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}

