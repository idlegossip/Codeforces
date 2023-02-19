///??To begin with the Name of Almighty ALLAH.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        //cin>>n;
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        int f = 0;
        int x , y;
        ll ml = a * b;
        for(ll i = a+1; i <= c; i++){
            ll g = __gcd(i, ml);
            ll nw = ml/g;
            ll l = 1,r = 1e5;
            x  = i;
            while(l <= r){
                ll mid = (l + r)>>1;
                ll val = nw * mid;
                if(val > b and val <= d){
                    f =1;
                    y = val;
                    break;
                }
                else if(val > d){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            if(f)
                break;

        }
        if(f){
            cout<<x<<' '<<y<<'\n';
        }
        else{
            cout<<"-1 -1"<<'\n';
        }



//        int a;
//        vector<int>v;
//        for(int i = 0; i < n; i++){
//            cin>>a;
//            v.push_back(a);
//        }
    }
}


