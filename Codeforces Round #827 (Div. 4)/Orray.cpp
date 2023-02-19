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
        ll a;
        vector<ll>v(n) ,v1;
        for(int i = 0;i < n; i++){
            cin>>v[i];
        }
        v1 = v;
        map<ll,ll>mp;
        vector<ll>ans;
        ll val = 0;
        for(ll i = 35; i >=0 ; i--){
                if((val & (1LL<<i)))
                    continue;
                int ind = 0 , mx =  val;
                for(int j = 0; j < n ; j++){
                        if((v1[j] & (1LL << i))){
                            if(mx < (val|v1[j]) and mp[j]==0){
                                ind = j;
                                mx = (val|v1[j]);
                            }
                        }
                }
                if(mx > val){
                    mp[ind] = 1;
                    ans.push_back(ind);
                    val = mx;
                }
        }
        int x = ans.size();
         for(ll i = 0; i < x ; i++){
                cout<<v[ans[i]]<<' ';
        }
        for(int i = 0 ; i < n; i++){
            if(mp[i])
                continue;
            cout<<v[i]<<' ';
        }

        cout<<'\n';
    }
}

