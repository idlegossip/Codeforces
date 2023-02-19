


/*   Bismillahir Rahmanir Rahim   */

#include<bits/stdc++.h>
using namespace std;
typedef   long long  int   ll;
typedef      long double   ld;
typedef     vector<ll>      vll;


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);





    ll t;
    cin>>t;
    while(t--)
    {
        ll dc,hc,hm,dm;
        ll dc1,hc1,hm1,dm1;
        ll k,w,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        ll L=1,r=k;
        ll f=0;
        while(L<=k)
        {
            ll l=(L+r)/2;

            ll cd=(hm/dc);
            ll md=hc/dm;
            if(cd<=md)
            {
                f=1;
                break;
            }
            dc1=dc+(l)*w;
            hc1=hc+(k-l)*a;


            cd=(hm/dc1);
            md=hc1/dm;
            if(cd<=md)
            {
                f=1;
                break;
            }

            dc1=dc+(k-l)*w;
            hc1=hc+(l)*a;
            cd=(hm/dc1);
            md=hc1/dm;
            if(cd<=md)
            {
                f=1;
                break;
            }
            L=l+1;
        }
        if(f==0)
        {

            dc1=dc+k*w;
            hc1=hc;
            cd=(hm/dc1);
            md=hc1/dm;
            if(cd<=md)
            {
                f=1;
            }
            dc1=dc;
            hc1=hc+k*a;
            cd=(hm/dc1);
            md=hc1/dm;
            if(cd<=md)
            {
                f=1;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;




    }


}
