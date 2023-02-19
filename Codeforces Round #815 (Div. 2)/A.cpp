#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll  t;
    cin>>t;
    while(t--)
    {
        ll n;

        ll a,b,c,d;
        vector<ll>v;

        cin>>a>>b>>c>>d;
        if((a*d)==(c*b))
        {
            cout<<0<<endl;
        }
        else if(a*d>c*b)
        {
            if((c*b)==0LL or (a*d)%(c*b)==0)
            {
                cout<<1<<endl;

            }
            else
            {
                cout<<2<<endl;
            }

        }
        else
        {
            if((a*b)==0LL or (c*b)%(a*d)==0)
            {
                cout<<1<<endl;

            }
            else
            {
                cout<<2<<endl;
            }
        }


//        for(ll i=0;i<n;i++)
//        {
//            cin>>a;
//            v.push_back(a);
//        }
    }
}
