#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>n;
        ll sum=0,a;
        m=n;
        for(ll i=0; i<=10000; i++)
        {
            n=m;
            sum=0;
            while(n)
            {
                sum+=(n%10);
                n/=10;
            }
            a= __gcd(m,sum);

            if(a>1)
                break;
                m++;
        }
        cout<<m<<endl;
    }
}
