#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        ll ind = 0;
        vector<pair<ll,ll> >ev,od;
        ll a;
        for(int i = 0; i < n; i++){
            cin>>a;
            if(a%2)
            od.push_back({a,i+1});
            else{
                 ev.push_back({a,i+1});
            }
        }
        if(od.size()==0){
            cout<<"NO\n";
        }
        else{
            if(od.size()==2 and ev.size()==1){
                 cout<<"NO\n";
            }
            else{
                 cout<<"YES\n";
                 ll cnt = od.size();
                 if(cnt == 2){
                    cnt=1;
                 }
                 else if(cnt > 2)
                    cnt=3;
                 for(int i = 0; i <cnt; i++){
                    cout<<od[i].second<<' ';
                 }
                for(int i = 0; i < ev.size() and i+cnt < 3; i++){
                    cout<<ev[i].second<<' ';
                 }
                 cout<<'\n';
            }
        }
    }
}

