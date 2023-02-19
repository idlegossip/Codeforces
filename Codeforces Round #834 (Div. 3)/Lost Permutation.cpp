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
        ll n,s;
        cin>>n>>s;


        vector<ll>v;
        map<int,int>mp;
        int a;
        int mx = 0;
        for(int i = 0; i < n; i++){
            cin>>a;
            mx = max(a,mx);
            mp[a] = 1;
            v.push_back(a);
        }
        int f = 1;
        for(int i = 1; s > 0; i++){
            if(mp[i])
                continue;
            mp[i] = 1;
            mx= max(i,mx);
            s -= i;
            if(s  <= 0)
                break;
        }
        for(int i = 1; i <= mx;i++){
            if(!mp[i])
                f = 0;
        }

        if(s==0 and f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

