
/*   Bismillahir Rahmanir Rahim   */

#include<bits/stdc++.h>
using namespace std;
typedef   long long  int   ll;
typedef      long double   ld;
typedef     vector<ll>      vll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using    namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define     fi              first
#define     se              second
#define     pb              push_back
#define Fin          freopen("input.txt","r",stdin)
#define Fout         freopen("output.txt","w",stdout)
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     ss              ' '
#define     pii            pair<ll,ll>
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)



int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);





    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        vector<ll>v;
        ll a;
        cin>>n;
        ll p[n+2];
        map<ll,ll>mp;
        mp.clear();
        vector<ll>ans;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);

        }

        ll mx=0;
         ll cur=0;
        for(ll i=n-1; i>=0; i--)
        {
            mp[v[i]]=1;
            while(mp[cur])
                cur++;
            p[i]=cur;
        }
        cur=0;
        mp.clear();
        ll ind=0;
        for(ll i=0; i<n; i++)
        {
            mp[v[i]]=1;
            while(mp[cur])
                cur++;
            if(cur==p[ind])
            {
                ans.push_back(cur) ;
                cur=0;
                mp.clear();
                ind=i+1;
            }
        }
        if(ind<n)
            ans.pb(cur);
        cout<<ans.size()<<endl;
        for(ll i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";
        cout<<endl;








    }
    /* you should actually read the stuff at the bottom  */

}

