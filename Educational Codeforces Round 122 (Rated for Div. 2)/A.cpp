
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
        ll n,x;
        cin>>n;
        vector<ll>v;
        while(n)
        {
            v.push_back((n%10));
            n/=10;
        }
        n=v.size();
        ll mn=1e16;
        ll a=10;
        ll result=0;
        if(n==1)
        {


           result=7;
        }
        else  if(n==2)
        {
            for(ll i=10; i<=99; i++)
            {
                if(i%7)
                    continue;
                vector<ll>v1;
                ll x=i,k=0;
                ll j=0;
                while(x)
                {
                    ll a=x%10;
                    if((abs(a-v[j++])))
                    k++;
                    x/=10;
                }
                if(mn>k)
                {
                    mn=k;
                    result=i;
                }

            }


        }
       else
        {
            for(ll i=100; i<=999; i++)
            {
                if(i%7)
                    continue;
               ll x=i,k=0;
                ll j=0;
               while(x)
                {
                    ll a=x%10;
                    if((abs(a-v[j++])))
                    k++;
                    x/=10;
                }
                if(mn>k)
                {
                    mn=k;
                    result=i;
                }

            }

        }
        cout<<result<<endl;
    }


}
