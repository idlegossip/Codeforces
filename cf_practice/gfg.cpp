#include<bits/stdc++.h>
using namespace std;
typedef       long long int   ll;
typedef      long double   ld;
typedef     vector<ll>      vll;
#define     fi              first
#define     print(v)        for(ll i:v) cout<<i<<ss
#define     se              second
#define     pb              push_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     ss              ' '
#define     pii             pair<ll,ll>
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
const double eps = 1e-7;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        multiset<ll>ms;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            ms.insert(a);
        }
        //   for(ll J : ms) cout<<J<<ss;
        // cout<<11;

        ll ans=0;
        while(zz(ms))
        {
            if(!zz(ms)) break;
            //cout<<111<<nn;
            ll sum=*--ms.end();
            auto ed = --ms.end();
            ms.erase(ed);

            while(zz(ms)&&sum<m)
            {
                // cout<<zz(ms)<<ss;
                ll rem=m-sum;
                auto it = ms.upper_bound(rem);
                it--;
                if(it==ms.end()) break;
                if(sum+*it<=m)
                {
                    sum+=*it;
                    ms.erase(it);
                }
                else break;
            }
            // cout<<2<<nn;
            ans++;
        }

        cout<<ans<<nn;

    }



}


/* Final check before submit :

1. array size or integer overflow,like uninitialised 0 index.

2. Think twice,code once.check all possible counter test case.

3. Be careful about corner case! n=1?k=1? something about 0?

4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?

5. if got WA than remember that you are missing something common.
   *** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;

*/


/* IF WA???

1. corner case! n=1?k=1? something about 0?

2. check code(avoid stupid mistake)

3. read the statement again(if there any missing point???)

4. check the idea(check all possible counter test case again!!!)

5. be calm,don't be panic!!!.(***this problem not going to decide your future***)

6. don't waste too much time. move to next problem

*/
