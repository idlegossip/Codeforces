

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

ll mp[1000005];

int main()
{




    ll t;
    //// cin>>t;
    // while(t--)
    // {

    ll n;
    ll mx=0;
    ll ans=0;


    ll a;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        mp[a]=1;
        mx=max(a,mx);
    }
    for(ll i=(mx/2); i>=1; i--)
    {
        ll cnt=0;
        ll f=0;
        if(mp[i])
            continue;
        for(ll j=2*i; j<=mx; j+=i)
        {
            if(mp[j])
            {
                if(!f)
                    f=j;
                cnt++;
                f=gcd(f,j) ;
            }

        }
        if(f==i&&cnt>1)
            ans++;

    }

    cout<<ans<<endl;






    //  }

}

