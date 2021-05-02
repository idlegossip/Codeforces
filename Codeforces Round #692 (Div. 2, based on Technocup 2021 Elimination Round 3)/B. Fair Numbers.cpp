

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    vector<ll>v;
    while(t--)
    {
        unsigned long long n;
        cin>>n;
        unsigned long long m=n;
        unsigned long long res=0,f=0;
        for(ll i=m;; i++)
        {
              m=i;
            n=i;
            f=1;
            while(n)
            {
                unsigned long long a=n%10;
                n/=10;
                if(a)
                {
                    if(m%a)
                    {
                        f=0;
                        break;
                    }

                }
            }
            if(f)
                  break;
        }
            cout<<m<<endl;

    }
    return 0;
}



