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
        int n,q;
        cin>>n>>q;
        ll a;
        vector<ll>v,v1(n+1),p(n+1),ans;
        for(int i = 0;i < n; i++){
            cin>>a;
            v.push_back(a);
            p[i] = a;
            if(!i){
                v1[i] = a;
            }
            else{
                v1[i] = max(v1[i-1],a);
                p[i] += p[i-1];
            }
        }
        int q1 = q;
        while(q--){
            cin>>a;
            int l = 0, r = n-1;
            int x = -1;
            while(l <= r){
                int mid = l+((r-l)/2);
                if(v1[mid] > a){
                    r = mid -1;
                }
                else{
                    l = mid + 1;
                    x = mid;
                }
            }
            if(x >= 0)
            ans.push_back(p[x]);
            else{
               ans.push_back(0);
            }
        }
        for(int i = 0; i < q1; i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';


    }
}

