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
        string s;
        cin>>s;
        ll mid = (n/2);
        ll cnt=1;
        for(ll i=mid-1;i>=0;i--)
        {
            if(s[mid]!= s[i])
                break;
            cnt++;
        }

         for(ll i=mid+1;i<n;i++)
        {
            if(s[mid]!= s[i])
                break;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
