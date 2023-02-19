#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll l =1,r=1000000;
    ll mid;
    ll ans=0;

    while(l<=r)
    {
        mid=(l+r+1)/2;
        cout<<mid<<"\n";
        fflush(stdout);
         string s;
        cin>>s;
        if(s == "<")
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
            ans = mid;
        }

    }
    cout<<"! "<<ans<<"\n";
    fflush(stdout);
}
