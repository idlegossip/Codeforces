#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 4e5+9;
const ll inf =4e9+9;
ll a[N];
vector<ll>p(N);
ll ind ;

struct ST
{

    ll t[4*N];
    ST()
    {
        memset(t,0,sizeof(t));
    }

    void build(ll n,ll l,ll r)
    {
        if(l==r)
        {
            t[n] = l;
            return;
        }
        ll mid = (l+r)>>1,ln = n<<1, rn = ln|1;
        build(ln,l,mid);
        build(rn,mid+1,r);
        if(p[t[ln]]>p[t[rn]])
            t[n] = t[ln];
        else
            t[n] = t[rn];
    }

    void update( ll n, ll l, ll r, ll in, ll val)
    {
        if(l>in || r<in)
            return;
        if(l==in&&r==in)
        {
            t[n] = val;
            return ;
        }
        ll mid = (l+r)>>1,ln = n<<1,rn = ln|1;
        update(ln,l,mid,in,val);
        update(rn,mid+1,r,in,val);
        t[n] = 1LL*t[ln] + 1LL*t[rn];
    }

    ll query(ll n,ll l,ll r,ll lin,ll rin )
    {
        if(l>rin ||lin>r)
            return inf;
        if(lin<=l&&r<=rin)
        {
            return t[n];
        }
        ll mid = (l+r)>>1,ln = n<<1,rn = ln|1;
        ll a= query(ln,l,mid,lin,rin);
        ll b= query(rn,mid+1,r,lin,rin);
        if(a!= inf and ( b==inf or p[a]>p[b]))return a ;
        else return b;
    }

} tre;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[3][n+1];

        ll ans = LONG_MAX;
        for(ll j=1; j<=2; j++)
            for(ll i=1; i<=n; i++)
                cin>>ar[j][i];


        ll j=1;
        for(ll i=1; i<=n; i++)
        {
            p[n*(j-1)+i] = ar[j][i];
        }

        j=2;
        ll x=1;

        for(ll i=n; i>=1; i--)
        {
            p[n*(j-1)+x] = ar[j][i];
            x++;
        }
//        cout<<endl;

//        j=1;
//        s[n*(j-1)+1]=ar[2][1]+1;
////         cout<<  s[n*(j-1)+1]<<" ";
//        for(ll i=2; i<=n; i++)
//        {
//            s[n*(j-1)+i] = s[n*(j-1)+i-1]>=ar[j][i] ? s[n*(j-1)+i-1]+1 : ar[j][i]+1;
//
////             cout<<  s[n*(j-1)+i]<<" ";
//        }
//
////        cout<<endl;
//
//        j=2;
//        x=1;
//        for(ll i=n; i>=1; i--)
//        {
//            s[n*(j-1)+x] = s[ n*(j-1)+x-1]>=ar[j][i] ? s[ n*(j-1)+x-1]+1 : ar[j][i]+1;
////             cout<<  s[n*(j-1)+x]<<" ";
//            x++;
//        }
////        cout<<endl;
        ll sum=0;
        tre.build(1,1,2*n);
        ll f=0;
        ll a ;
        ll l =1 , r = 2*n;
        a = tre.query(1,1,2*n,l,r);
        a = min(p[a],p[a]+(r-a+1));
           ans=a;
        for( ; l<r; )
        {
            if(f<=1)
            {
                if(sum<p[r]) sum=p[r]+1;
                else sum++;
                f++;
                f%=4;
                r--;

                a = tre.query(1,1,2*n,l,r);
                //cout<<a<<" ";
                 if(p[a]>sum)
                 {
                      a = min(p[a]+(r-a),p[a]+(a-l));
                      a =a+1;
                 }
                 else
                 {
                     a= sum+(r-l+1);
                 }
                ans = min(ans,a);
            }
            else
            {
                if(sum<p[l]) sum=p[r]+1;
                else sum++;
                f++;
                f%=4;
                l++;
                 a = tre.query(1,1,2*n,l,r);
                 cout<<p[a]<<" lr "<<l<<" "<<r<<'\n';
                 if(p[a]>sum)
                 {
                      a = min(p[a]+(r-a),p[a]+(a-l));
                      a =a+1;
                 }
                 else
                 {
                     a= sum+(r-l+1);
                 }
                ans = min(ans,a);
            }
        }
       // ans = min(ans,sum);
        cout<<ans<<endl;
    }
}

