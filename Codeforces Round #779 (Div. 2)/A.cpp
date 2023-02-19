#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        ll n;
        cin>>n;
        cin>>str;
        ll ans=0;
        for(ll i=1;i<n;i++)
        {
            if(str[i]=='0'&&str[i-1]=='0')
                ans+=2;
            else if(i!=n-1&&str[i]=='1'&&str[i-1]=='0'&&str[i+1]=='0')
                ans++;

        }
        cout<<ans<<endl;
    }
}
