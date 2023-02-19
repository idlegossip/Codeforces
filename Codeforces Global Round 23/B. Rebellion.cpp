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

        int ans = 0;
        int a;
        vector<int>v;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        ll l = 0, r = n - 1;
        while(l < r){
            if(v[r] == 0){
                    while(l < r and v[l] == 0 )l++;
                    if(l < r){
                        ans++;
                        //cout<<l<<' '<<r<<'\n';
                        l++;
                    }
            }
            r--;
        }
        cout<<ans<<'\n';


    }
}

