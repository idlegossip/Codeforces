#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll mod = n%3;
        ll ans = n/3;
        if(mod==2)
        {
            cout<<ans+1<<" "<<ans+2<<" "<<ans-1<<endl;
        }
        else if( mod ==1)
        {
           cout<<ans<<" "<<ans+2<<" "<<ans-1<<endl;
        }
        else
            cout<<ans<<" "<<ans+1<<" "<<ans-1<<endl;
    }
}
