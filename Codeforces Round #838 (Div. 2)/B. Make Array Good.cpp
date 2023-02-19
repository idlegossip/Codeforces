
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
        vector<pair<ll,ll> >v,ans;
        priority_queue<pair<ll,ll> >pq;
        for(int i = 0; i < n; i++){
            cin>>a;
            pq.push({-a,i});
        }
        a = -pq.top().first;
        pq.pop();
        while(!pq.empty())
        {
            ll x = -pq.top().first;
            ll ind  = pq.top().second;
            pq.pop();
            if(x % a){
                ll d = x / a;
                d++;
                pq.push({-(d * a),ind});
                x = d*a - x;
                ans.push_back({ind+1,x});
            }
            else{
                a = x;
            }
        }
        cout<<ans.size()<<'\n';
        for(auto [x,y] : ans){
                cout<<x<<' '<<y<<'\n';

        }


    }
}

