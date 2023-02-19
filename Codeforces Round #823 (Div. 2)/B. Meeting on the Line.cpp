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
        double a;
        vector<ll>v,v1;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        for(int i = 0; i < n; i++){
            cin>>a;
            v1.push_back(v[i]+a);
            v1.push_back(v[i]-a);
        }
        sort(v1.begin(),v1.end());
        double ans = (v1[0]+v1[2*n-1])/2;
        if((v1[0]+v1[2*n-1]) % 2 ){
            ans += 0.5;
        }
        cout<<fixed<<setprecision(6)<<ans<<'\n';
    }
}


