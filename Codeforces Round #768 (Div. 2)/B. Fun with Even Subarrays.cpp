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
        vector<ll>v,v1;
        ll n,a;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }


        reverse(v.begin(),v.end());
        ll cnt=0;
        ll ans=0;
        ll j=0;
        while(j<n)
        {
//            ll x=(1<<j);
//            cout<<(1<<(j-1))<<" "<<(1<<j)<<endl;

            if(a==v[j])
            {
                j++;
                continue;
            }

            ans++;
            j*=2;
        }

        cout<<ans<<endl;


    }

}




