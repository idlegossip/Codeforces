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
        vector<pair<ll,ll> >vp;
        ll a,ind;
        cin>>n;
        set<ll>st,st1;
        for(int i = 0; i < n; i++){
            cin>>a;
            st.insert(i+1);
            st1.insert(i+1);
            vp.push_back({a,i});
        }
        vector<ll>ans(n+1,0),ans1(n+1,0);
        sort(vp.begin(),vp.end());
        ll f= 1,val;
        for(int i = 0; i < n; i++){
                ind = vp[i].second;
                val = vp[i].first;
                if(st.find(val)==st.end() and st1.find(val)==st1.end()){
                        f=0;
                        break;
                }
            if(st.find(val) != st.end() and *st1.begin() <= val){
                    a = *st1.begin();
                    ans[ind] = val;
                    ans1[ind] = a;
                    st.erase(val);
                    st1.erase(a);

            }
            else  if(st1.find(val) != st1.end() and *st.begin() <= val){
                    a = *st.begin();
                    ans[ind] = a;
                    ans1[ind] = val;
                    st1.erase(val);
                    st.erase(a);
            }
            else{
                f = 0;
                break;
            }

        }
        if(f){
            cout<<"YES\n";
            for(int i = 0; i < n; i++){
                cout<<ans[i]<<' ';
            }
            cout<<'\n';
            for(int i = 0; i < n; i++){
                cout<<ans1[i]<<' ';
            }
             cout<<'\n';

        }
        else{
            cout<<"NO\n";
        }



    }
}
