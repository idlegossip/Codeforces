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
        cin>>n;
        vll v;
        ll a;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);

        }

        ll lm=0;
        ll f=0;
        for(ll i=0; i<n; i++)
        {
            f=0;

                for(ll j=1; j<=(min(i+1,22LL)); j++)
                {
                    if(v[i]%(j+1))
                    {

                        f=1;
                        break;

                    }
                }
                if(!f)
                    break;
        }
        if(!f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }

}


