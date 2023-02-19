#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
const  ll N=1e6+7;
ll x[N],y[N];
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    o_set<ll>osx,osy;

    ll n;
    ll q;
    cin>>n>>q;
    for(ll i=1; i<=n; i++)
    {
        osx.insert(i);
        osy.insert(i);
    }
    ll x1,y1,x2,y2;
    ll f;
    while(q--)
    {
        cin>>f;
        if(f==1)
        {
            cin>>x1>>y1;
            if(x[x1]==0)
                osx.erase(x1)  ;
            if(y[y1]==0)
                osy.erase(y1)  ;
            x[x1]++;
            y[y1]++;
        }
        else if(f==2)
        {
            cin>>x1>>y1;
            x[x1]--;
            y[y1]--;
            if(x[x1]==0)
                osx.insert(x1);
            if(y[y1]==0)
                osy.insert(y1);
        }
        else
        {
            ll f=1;
            cin>>x1>>y1>>x2>>y2;
            ll cnt1 = osx.order_of_key(x2+1) ;
            ll cnt2 = osx.order_of_key(x1) ;
            if(cnt1-cnt2>0)
                f=0;
            cnt1 = osy.order_of_key(y2+1) ;
            cnt2 = osy.order_of_key(y1) ;
            if(f==0&&cnt1-cnt2>0)
                f=0;
                else
                    f=1;
            if(f) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

        }


    }

}
