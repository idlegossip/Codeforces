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
        ll tot = 0;
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a){
                 tot +=a ;
        tot +=b ;
        tot +=c ;
        tot +=d ;
        ll ans = a;
        ll mn = min(b,c);
        ll mx = max(b,c);
        ll dif = (mx - mn);
        ll mn1 = min(mn,a);
        ans += 2*mn;
        dif = min(a,dif);
        ans += dif;
        a -= dif;
        ans += min(a,d);
        cout<<min(ans+1,tot)<<'\n';

        }
        else{
            cout<<1<<'\n';
        }


    }
}

