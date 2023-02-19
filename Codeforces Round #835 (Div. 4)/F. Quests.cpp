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
        ll n,c,d;
        cin>>n>>c>>d;
        vector<ll>v;
        ll a;
        ll sum = 0;
        ll mx = 0;
        int f = 0;
        for(int i = 0 ; i < n; i++){
            cin>>a;
            mx = max(mx,a);
            sum += a;
            if(sum >= c and (i+1)<= d){
                f = 1;
            }
            v.push_back(a);
        }
        if(mx * d < c){
            cout<<"Impossible\n";
            continue;
        }
        if(f){
            cout<<"Infinity\n";
            continue;
        }
        //cout<<"here\n";
        sort(v.rbegin(),v.rend());
        ll l = 1, r = n;
        ll ans = - 1;
        while(l <r){
               // cout<<l<<' '<<r<<endl;
            ll mid = (l + r)/2;
            ll sm = 0;
            ll  r = (d % mid);
            ll md = 0;
            for(int i = 0; i < mid; i++){
                sm += v[i];
                if(i < r){
                    md += v[i];
                }
                //cout<<mid<<" here \n";
            }
            ll tot = (d/mid) * sum ;
            tot += md;
            //cout<<" here "<< tot<<'\n';
            if(tot >= c and mid <=d){
                l = mid +1;
                ans = mid;
               // cout<<tot<<" here "<<l<<' '<<r<<' '<<mid<<endl;
            }
            else{
                r = mid - 1;
            }
        }
        cout<<ans<<'\n';
    }
}

