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
        ll res=0;
        ll n;
        cin>>n;
        cin>>str;
        ll f=0,l=0;
        for(ll i=0; i<n; i++)
        {
            if(str[i]!='0'&&i!=n-1)
                l++;
            res+=(str[i]-'0');
        }
        cout<<res+l<<endl;
    }
}
