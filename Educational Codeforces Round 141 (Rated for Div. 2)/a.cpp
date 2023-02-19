#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a;
        vector<ll>v;
        set<ll>st;
        for(int i = 0; i < n; i++){
            cin>>a;
            st.insert(a);
            v.push_back(a);
        }
        if(st.size()==1){
            cout<<"NO\n";
            continue;
        }
        else{
            cout<<"YES\n";
        }
        sort(v.rbegin(),v.rend());
        ll l = 0, r = n-1;
         while(l <= r){
             if(l != r)
                cout<<v[l++]<<' '<<v[r--]<<' ';
                else
                    cout<<v[l++]<<' ';

         }
        cout<<'\n';

    }
}
