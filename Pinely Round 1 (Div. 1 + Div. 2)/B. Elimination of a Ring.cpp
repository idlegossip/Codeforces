#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n;
        vector<ll>v,v1;
        ll l = n;
        set<ll>st;
        for(int i = 0; i<n; i++){
            cin>>a;
            st.insert(a);
            v.push_back(a);
        }
        if(n <= 2 or st.size()>2){
            cout<<n<<'\n';
        }
        else{
            cout<<(n/2)+1<<'\n';
        }


    }
}

